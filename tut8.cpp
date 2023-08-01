# include <iostream>
# include <iomanip>
using namespace std;

int main(){
    // const int a = 3;
    int a = 73, b = 2, c = 1233;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of a is: "<<setw(4)<<a<<endl;// setw is a manipulator for better formatting

    return 0;
}