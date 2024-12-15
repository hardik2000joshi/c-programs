// looping of strings in C++
// Printing each character of string by running loop
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str= "Lovely Professional University";
    for (char ch:str) {
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
}
