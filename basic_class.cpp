#include <iostream>
using namespace std;
class basic_class{
    public:
    int first_num, second_num;
    sum(int a, int b){
        cout << "sum of a, p and b is" << a+b;
    }
};
int main(){
    basic_class b1;
    b1.first_num=100;
    cout << "value of first number is" << b1.first_num;
return 0;
}

