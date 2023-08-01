#include <iostream>

using namespace std;
int main(){
    int marks[3] = {1, 2, 3};

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;

    int* p = marks;
    cout<<p<<endl;
    cout<<*++p<<endl;
    cout<<*++p<<endl;
    cout<<*++p<<endl;


    return 0;
}