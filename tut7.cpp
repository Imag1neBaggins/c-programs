
// there are two types of header files
//1. system header files
#include <iostream>

//2. user defined system files
#include "this.h"

using namespace std;

int c = 45;

int main(){
//     int a, b , c;
//     cout<<"Enter the value of a: "<<endl;
//     cin>>a;
//     cout<<"Enter the value of b: "<<endl;
//     cin>>b;
//     c = a + b;

//     cout<< "The sum is: "<<c<<endl;
//     cout<< "The global c is: "<<::c;

    // float f = 34.4f;

    // cout<<"the size of 34.4 is: "<<sizeof 34.4f<<endl;
    // cout<<"the size of 34.4 is: "<<sizeof 34.4F<<endl;
    // cout<<"the size of 34.4 is: "<<sizeof 34.4l<<endl;
    // cout<<"the size of 34.4 is: "<<sizeof 34.4L<<endl;


    // reference variables
    float x = 455;
    float & y = x;
    x = 360;
    cout<<y<<endl;

    float b = 36.35;
    cout<<"B is: "<<(int)b<<endl;
    cout<<"B is: "<<int(b)<<endl;

    return 0;
}
