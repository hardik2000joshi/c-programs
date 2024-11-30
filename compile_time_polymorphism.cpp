// program to show working of compile time polymorphism
#include <iostream>
using namespace std;
class sample {
    public:
    int chk_num() {  // taking chk_num as function in integer data type - declaring the function
        int a=100;    // taking variable a whose value is 100 of integer data type
        cout<<"value of a is "<<a<<endl;
    }
    // this function used to print even or odd number 
    int chk_num(int a) {  //calling a function in parameter- int a
    if (a%2==0)
    cout<<"Entered number is even: "<<a<<endl;
    else
    cout<<"Entered number is odd: "<<a<<endl;
    }
    // this function used to display sum of x and y
    float chk_num(float x, float y) { // same function chk_num with different variables of different data type-  function declaration
    cout<<"sum of float x and y is "<< x+y <<endl; 
    }
    double chk_num(double a, double b, double c){
        if (a>b && a>c)
        cout<<"a is larger"<<endl;
        else if(b>a && b>c)
        cout<<"b is larger"<<endl;
        else
        cout<<"c is larger"<<endl;
    }
};
main() {
    int p, q, r;
    cout<<"Enter three number to check, which is larger: ";
    cin>>p>>q>>r;
    sample obj;
    obj.chk_num();    // calling a function
    obj.chk_num(42);   // calling a function
    obj.chk_num(15.25, 42.25);  // calling a function
    obj.chk_num(8520, 5890, 1025);  // calling a function
    obj.chk_num(p, q, r);  // calling a function
}    