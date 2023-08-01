#include <iostream>

using namespace std;

//function prototypes
// int sum(int a, int b);
int sum(int, int);  //this works as well


int sum(int a, int b){  //a and b are formal parameters
    return a+b;
}

int main(){
    int num1, num2; 
    cout<<"enter first num: "<<endl;
    cin>>num1;
    cout<<"enter second num: "<<endl;
    cin>>num2;
    cout<<sum(num1, num2)<<endl;  //num1 and num2 are actual parameters
    return 0;
}