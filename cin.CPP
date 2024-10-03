// cout  used to output (print) values.
// Now cin to get user input from the keyboard or to get input from user
// Let's practise with a program using cin

#include <iostream>
using namespace std;
int main()
{
    int xyz; // declaring a variable xyz without assign any value to it
    cout<<"Enter a value:"; // type a value and press enter
    // for assigning a value to variable xyz we use (cin) like (cout)
    cin>> xyz; // through cin we get user input from keyboard used with  (>>) extraction operator
    cout<< "Value of xyz is:" << xyz; // cout used to display input value which we take from keyboard
    // To combine both text and a variable, separate them with the (<<) insertion operator like << "value of xyz is:" (text) << xyz(variable)
    return 0;
}
