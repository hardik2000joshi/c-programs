#include <iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"enter character array:"<<endl;
    // cin.getline(str, len, delim) len used for length
    cin.getline(str, 21);  // cin.getline used to prevent in not taking input of after space characters
    for (char ch:str) {
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
}
