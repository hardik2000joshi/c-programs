#include <iostream>
using namespace std;
class sample
{
    private:
    int number;
    public:
    sample():number(0) {}
    friend int printNumber(sample);
};
int printNumber(sample s)
{
    s.number+=100;
    return s.number;
}
int main()
{
    sample s;
    cout<<"Entered Number is :"<<printNumber(s)<<endl;
    return 0;
}
