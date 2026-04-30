#include<iostream>
using namespace std;
int main(){
    int *ptr;
    // cout<<ptr<<" "<<*ptr<<endl; // Wild pointer in which we declare not define

    //Null pointer

    //a pointer which is just declare but address will be given later
    //but we dont let it have a garbage or random value

    int *ptr1 = NULL; // we can also write as /0
    // cout <<ptr1<<" "<<*ptr1<<endl; 
    //here main problem is it gives segementation fault in dereffernce or runtime

    //Dangling pointer

    //that points to a memory location that is not valid or deleted
    //for example :- pointer inside a local scope like function or loop

    //void pointer
    float f = 10.2;
    //these are special pointers that can point to any datatype 
    // int *ptr2 = &f; //it will give error
    //so use void pointer
    void *ptr2 = &f;
    // but we cant dereffernce 

    // cout<<ptr2<<" "<<*ptr2; // *ptr2 error dega
    //so we use typecast here 

    int *ptr3 = (int *)ptr2; // typecast
    cout<<ptr2<<" "<<*ptr3;


    return 0;
}