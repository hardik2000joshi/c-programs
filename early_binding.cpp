#include <iostream>
using namespace std;
class Base {
    public:
    void print() {
        cout<<"This is Early Binding Class"<<endl;
        cout<<"This is Parent class"<<endl;
    }
};
class Derived:public Base {
    public:
    void print(){
        cout<<"This is child class"<<endl;
        cout<<"This is Early Binding class"<<endl;
    }
    };
int main(){
    Base*bptr;
    Derived d;
    bptr=&d;
    bptr->print();
}