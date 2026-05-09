#include <iostream>
using namespace std;
void fun(int num , int k){
    // base case
    if(k == 0)return ;
    //assumption
    fun(num, k-1); // function again
    //self work
    cout<<(num * k)<<" ";
}
int main(){
    fun(3,3);
    return 0;
}