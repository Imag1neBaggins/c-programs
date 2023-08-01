#include <iostream>

using namespace std;

typedef struct employee
{
    /* data */
    int eID;
    char favChar;
    float salary;
} ep;

union money  //better memory management only one var can be used at a time
{
    int rice;
    char car;
    float pounds;
};

int main(){
    ep harry;
    harry.eID = 123;
    harry.favChar = 'f';
    harry.salary = 2000.5;
    cout<<harry.salary<<endl;

    union money m1;
    m1.rice = 65;
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;

    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<dinner<<endl;

    
    return 0;
}