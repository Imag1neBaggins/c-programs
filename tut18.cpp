#include <iostream>

using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<< " is "<<factorial(a)<<endl;

    int b;
    cout<<"Enter a number"<<endl;
    cin>>b;
    cout<<"The term in fibonacci sequence at position "<<b<< " is "<<fib(b)<<endl;

    return 0;
}