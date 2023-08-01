#include<iostream>
#include <cmath>
using namespace std;


class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
    // cout<<"Hello world";
}

class Point{
    int x, y;
    friend void distance(Point, Point);
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};

void distance(Point p1,Point p2){
    int x_diff = (p2.x-p1.x);
    int y_diff = (p2.y-p1.y);
    int diff = sqrt(pow(x_diff,2)+pow(y_diff,2));
    cout<< "The difference is : "<<diff<<endl;
}

int main(){
    // Implicit call
    Complex a(4, 6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();

    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();

    distance(p, q);

    return 0;
}

