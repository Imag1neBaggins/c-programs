#include <iostream>
using namespace std;

int main(){
    //What is a pointer ----> Data type which holds address of other data types

    int a = 3;
    int * b = &a;
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The address of a is: "<<&a<<endl;
    
    cout<<"The value at b is: "<<*b<<endl;
    cout<<"The value at b is: "<<*&a<<endl;
    cout<<"The address of b is: "<<&b<<endl;

    //& ---> (Address of) operator
    //* ---> Dereference (value at) operator

    int** c = &b;

    cout<<c<<endl;

    return 0;
}