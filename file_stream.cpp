#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream st;
    st.open("test.txt", ios::out); // out- output for writing info to files
    if(!st) {
        cout<<"File Creation Failed";
    }
    else {
        cout<<"New file created";
        st.close();
    }
    return 0;
}