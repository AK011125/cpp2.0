#include<iostream>
using namespace std;

int main(){
    int arr [] = {1,4,7,2,9,5,6,5,4,3,2};
    for(int i = 0; i<size(arr);i++){
        arr[i] = arr[i] + arr[i-1];
        cout<<arr[i]<<" ";
    }
    return 0;
}