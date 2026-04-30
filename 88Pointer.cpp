#include<iostream>
using namespace std;

int main(){
    int x = 10;
    cout<<&x<<endl; //Print address

    int *ptr = &x; //store address of x in int ptr;
    cout<<ptr<<endl;  //it will give address of x

    cout<<*ptr<<endl; // it will give value of ptr pointer

    cout<<&ptr<<endl; //address of ptr

    //to update a pointer do
    // *ptr = 15;
    //now x = 15

    *ptr = 15;
    cout<<*ptr<<endl<<x;
    return 0;
}