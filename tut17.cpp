#include <iostream>

using namespace std;

inline int product(int a, int b){ //in the actual program, replaces call of function with actual code inside the function, to save time
    static int c = 0;
    c++;
    return a*b+c;
}

float moneyReceived(int currentMoney, float factor=1.04){ //if factor value is recieved in function call, it will be overwritten else factor will stay 1.04. basically you can call function with only one arguement and the other set as default
    return currentMoney * factor;//default variable must be declared after normal parameter else there will be error
}

int strlen(const char *p){
//const as parameter ensures parameter value will never be changed, usually used or pointers and address
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";

    return 0;
}