#include<iostream>
using namespace std;
class Complex{
int a,b;
public:
void get_data(){

cout<<"Enter the value of complex numbers a and b";
cin>>a>>b;
}
Complex operator +(Complex ob){
Complex c;
c.a=a+ob.a;
c.b=b+ob.b;
return (c);
}
void display()

{
cout << a << "+" << b << "i" << "\n";
}
};
main(){
Complex obj1,obj2,result;
obj1.get_data();
obj1.display();
obj2.get_data();
result=obj1+obj2;
result.display();
}
