#include <iostream>
using namespace std;
int main(){
    char str[]="Lovely Professional University";
    int length=0;
    for(int i=0; i<str[i]!='\0'; i++){
        length++;
    }
    cout<<"length of string: "<<length<<endl;
    return 0;
}