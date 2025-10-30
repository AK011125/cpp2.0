#include<iostream>
using namespace std;
int main(){
    int arr[] = {-9,-5,-2,-1,2,3,4,5};
    int n = size(arr);

    int result[n];
    int i = 0, j = n-1, k = n-1;
    while(i <= j && k>= 0){
        if(abs(arr[i]) > abs(arr[j])){
            result[k] = arr[i]*arr[i];
            i++;
            k--;
        }else{
            result[k] = arr[j]*arr[j];
            j--;
            k--;
        }
    }
    for(int i = 0; i < n; i++) cout<<result[i]<<" ";
    
    return 0;
}