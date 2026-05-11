#include<iostream>
using namespace std;
int fun(int *arr, int n , int x , int i){
    if(i == n) return 0;

    if(arr[i] == x || fun(arr,n,x,i+1) == 1){
        return 1;
    }else{
        return 0;
    }
}

bool f(int *arr, int n , int x, int i){          //better version 
    if(i == n) return false;
    return (arr[i] == x)|| f(arr, n, x, i+1);
}

int main(){
    int n = 10;
    int arr [] = {1,2,3,4,5,6,7,8,9,10};
    int x;
    cout<<"Enter element to find : ";
    cin>>x;
    cout<<fun(arr, n, x, 0)<<endl;

    bool result = f(arr , n, x, 0);
    if(result) cout<<"Yes";
    else cout<<"No";
    return 0;
}