#include <iostream>
#include <fstream>
using namespace std;
class Base{
    public:
    void msg(){ // function created
    cout<<"File will be created using inheritance"<<endl;
    }
};
class Derived:public Base{
    public:
    void createFile(){
        fstream fs;
        fs.open("games.txt", ios::out);   
        if(!fs){
            cout<<"File not created"<<endl;
        }
        else {
            cout<<"File created"<<endl;
            fs.close();
        }   
    }
};
int main(){
    Derived obj;
    obj.msg();
    obj.createFile();
    return 0;
}