// Comments can be used to explain C++ code, and to make it more readable. 
// Today we write a program and also showing the working of comments:
// comments ignored by the compiler, it will not be executed.

#include <iostream>  // include <iostream> is a header file library. //- this is single line comment
using namespace std;  // using namespace std is used for naming objects from standard liubrary
int main() // int main()  is a function
/*   
(//) is a single line comment and
/* and *\ is a multi line comment
Between /* and *\ any thing or any code written will not be executed
*/
{
    cout<<"Today we study comments in C++ \n"; // cout used to print statement or values or output display on screen
    cout<<"There are single line and multi line comments \n";
    cout<<"single line comment are represented by // and multi-line comments- /* and */ ";
    return 0; // return 0 ends the main() statement  
}