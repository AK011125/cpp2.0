#include <iostream>
using namespace std;
int fun(int *arr, int idx, int n){
    if(idx == n-1){
        return arr[idx];
    }
    return arr[idx] + fun(arr, idx+1, n);
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    int a;
    cin>>a;
    cout<<fun(arr,a,n);

    return 0;
}