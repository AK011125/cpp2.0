#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i = 0;i <= size(arr);i++){
        for(int j = 0;j < size(arr);j++){
            if(arr[j] - arr[i] == n){
                cout<<"Yes !!!  "<<arr[i]<<", "<<arr[j]<<endl;
            }
        }
    }

    return 0;
}