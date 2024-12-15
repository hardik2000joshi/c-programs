#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string a="hello";
     reverse(a.begin(), a.end()); // iterators
    cout<<a<<endl;
    return 0;
}