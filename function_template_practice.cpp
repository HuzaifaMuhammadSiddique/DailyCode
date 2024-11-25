#include <iostream>
#include <string>
using namespace std;

template <typename T>
    T add(T one, T two){
        return one + two;
    }
template <typename K>
    void print(K tee){
        cout << tee << endl;
    }

int main() {
    int integer = 5;
    char character = '?';
    bool boolean = true;
    double decimal = 6.88;
    string word = "just";
    
    int t1 = add(integer, integer);
    char t2 = add(character, character);
    double t3 = add(decimal, decimal);
    string t4 = add(word, word);
    bool t5 = add(boolean, boolean);
    
    print(t1); print(t2); print(t3); print(t4); print(t5);

    return 0;
}
