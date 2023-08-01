#include <iostream>
#include<string>
using namespace std;

class binary
{
public:
    void read(void);
    void ones_compliment(void);
    void display(void);

private:
    string s;
    void chk_bin(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++){
        if (s.at(i) == '0') s.at(i) = '1';
        else s.at(i) = '0';
    }
}

void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)cout << s.at(i);
    cout<<endl;
}

int main(){
    // you can declare objects along with the class declarion like this:
    /* class Employee{
            // Class definition
        } harry, rohan, lovish; */
    // harry.salary = 8 makes no sense if salary is private

    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();


    return 0;
}