#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,6,7,8};
    int brr[] = {1,2,4,5,6,9,10};
    int n = size(arr);
    int m = size(brr);
    int crr[n+m];
    
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n and j < m){
        //Both i and j should be within the limit
        if(arr[i] < brr[j]){
            crr[k] = arr[i];
            k++;
            i++;
        }else{
            crr[k] = brr[j];
            k++;
            j++;
        }
    }

    while(i < n){
        //if arr got exhausted
        crr[k] = arr[i];
        i++;
        k++;
    }

    while(j < m){
        //if brr got exhausted
        crr[k] = brr[j];
        k++;
        j++;
    }

    //display result
    for(int i = 0; i < (m+n); i++) cout<<crr[i]<<" ";

    return 0;
}