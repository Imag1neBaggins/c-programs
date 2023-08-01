# include <iostream>

using namespace std;
int glo = 9;

int main(){
    string s = "You are stupid"; //declaring a string
    int n = 1;
    int a = 15, b = 14;
    double d = 2.345;
    float f = 3.142;
    char c = 't';
    
    int I = 1;

    bool t = false; //true prints 1, false prints 0
    int z = true;
    cout<<z<<"\n"; //prints 0
    cout<<t<<"\n"; //prints 1

    cout<<glo<<"\n";
    int glo = 6; //local variable takes precedence over global variable
    cout<<glo<<"\n";

    cout<<"This is tutorial 4, n is: "<<n<< ", d is: "<<d<<"\n";
    cout<<" the value of pi is: "<<f;
    cout<<"\nThe value of c is: "<<c;

    return 0;
}