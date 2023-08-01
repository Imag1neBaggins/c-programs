# include <iostream>

using namespace std;

int main(){
    unsigned int n = 2;
    unsigned long long l = 23.2342;

    int num1, num2;
    cout<<"Enter the value of num1:\n";  // "<<" is called Insertion operator
    cin>>num1;  // ">>" is called Extraction operator
    cout<<"Enter the value of num2:\n";  // "<<" is called Insertion operator
    cin>>num2;  // ">>" is called Extraction operator
    cout<<"The sum is: "<<num1 + num2;

    return 0;
}