#include <iostream>
using namespace std;
int sum(int a, int b, int c){
    return a+b+c;
}
 main()
{
    int x, y, z;
    cout<<"Enter three numbers";
    cin>>x>>y>>z;  //get user input from keyboard or to get input from user
    cout<<"sum of entered three numbers is"<<sum(x, y, z);
    return 0;
}
