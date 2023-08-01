#include <iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); //declaration
        void getData(){
            cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee e1;
    e1.setData(4, 5, 6);
    e1.d = 34;
    e1.e = 45;
    e1.getData();
    return 0;
}