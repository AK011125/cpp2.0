#include <iostream>
using namespace std;
void process(int *arr, int n){
    for(int i = 0; i< n; i++){
        cout<<*(arr +i)<<endl;
    }
    *(arr + 1) = 33;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    process(arr, 3);

    for(int i = 0; i< 3;i++){
        cout<<arr[i]<<" ";
    }

    //int (*ptr)[5] = &arr;
    //here ptr is a pointer of address arr 
    return 0;
}