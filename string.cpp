#include <iostream>
#include <string> // header file for string
using namespace std;
int main(){
    // strings are dynamic in nature
    string str="Rajasthan University"; // dynamic= runtime resize
    cout<<str<<endl;

    // Adding two strings & compare 
    string str1= "Commerce";
    string str2= "college";
    string str3=str1+str2;
    cout<<str3<<endl;
    cout<<(str1==str2)<<endl;
    

    str="hello";
    cout<<str<<endl;
    cout<<str.length()<<endl;

    // comparing two strings
    string p="university";
    string r= "university";
    cout<<(p==r)<<endl;

    // greater than or less than in strings:
    string a= "open";
    string b="close";
    cout<<(a>b)<<endl;

    
    return 0;
}