#include <iostream>
using namespace std;
int fun(int n){
    //base case
    if(n == 0) return 0;
    fun(n-1);
    return fun(n-1) + ((n%2 == 0)?(-n):(n));
}

int main(){
    cout<<fun(5);
    return 0;
}