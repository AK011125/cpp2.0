#include <iostream>
using namespace std;

void printarr(int *arr, int i, int n){
    if(i == n) return ;
    
    cout<<arr[i]<<" ";
    
    printarr(arr,i+1,n);
    
}
int main(){
    int i;
    cout<<"From which index you want to print elements : ";
    cin>>i;
    int arr [] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    printarr(arr,i,n);
    return 0;
}