#include <iostream>
using namespace std;
void msg() {
    cout<<"hello, this is a message\n";

}
int sum(){
    int a, b;
    cout<<"Enter two Number"; //to print output  or to get output
    cin>>a>>b; //get user input from keyboard or to get input from user-cin
    cout<<"sum of two numbers is"<<a+b; 
}
main() {
    msg();
    sum();
}
