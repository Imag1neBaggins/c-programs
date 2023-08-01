#include <iostream>

using namespace std;

int sum(int a, int b){
    return a + b;
}

// this will not swap a and b
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

//call by reference using pointers
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int & swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main(){
    int a = 5, b = 4;
    swap(a, b);
    cout<<"a is "<<a<<", b is "<<b<<endl;
    
    swapPointer(&a, &b);
    cout<<"a is "<<a<<", b is "<<b<<endl;

    a = 6;
    swapReferenceVar(a, b)  = 500; //a is pointing to b now, b is pointing to a
    cout<<"a is "<<a<<", b is "<<b<<endl;

    printf("hello world \n");
    printf("hello world");
    
    return 0;
}