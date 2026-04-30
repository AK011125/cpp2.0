#include<iostream>
using namespace std;
int main(){
    int arr[4] = {1,10,20,30};
    int *ptr = &arr[0];
    
    cout<<*ptr<<endl; //1
    cout<<*ptr++<<endl; //1
    cout<<*++ptr<<endl; //20
    cout<<ptr++<<endl; // address
    cout<<++*ptr<<endl; //31

    cout<<arr<<endl; //index of arr[0]
    cout<<*arr<<endl; //1
    cout<<(arr+1)<<endl; //index of arr[1]
    return 0;
}