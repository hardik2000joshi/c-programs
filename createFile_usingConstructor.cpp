#include <iostream>
#include <fstream>
using namespace std;
class createFile{
    public: // access specifier
    createFile(){ // call constructor
     fstream fs;
     fs.open("file.txt", ios::out);
     if(!fs){
        cout<<"File not created";
     }
     else {
        cout<<"File created";
        fs.close();
     }
    } 
};
int main(){
    createFile cf;
    return 0;
}