#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> numbers){
    for(int num : numbers){
        cout << num << " ";
    }
    cout << endl;
}

void addNZeros(vector<int>* numbers, int n){
    for(int i=0; i<n; i++){
        numbers->push_back(0);
    }
    
}

int main() {

    vector<int> nums = {1,2,3,4,5};
    
    nums.push_back(6);
    nums.push_back(7);
    
    print(nums);
    
    cout << nums.at(2) << endl;
    cout << nums[0] << endl;
    
    nums.pop_back();
    nums.pop_back();
    
    print(nums);
    
    cout << "size: " << nums.size() << endl;
    cout << "capacity: " << nums.capacity() << endl;
    
    addNZeros(&nums, 6);
    
    print(nums);

    cout << "size: " << nums.size() << endl;
    cout << "capacity: " << nums.capacity() << endl;
    
    // We have more methods like:
    // .clear()
    // .insert()
    // .erase()
    // .begin()
    // .end()

    return 0;
}





