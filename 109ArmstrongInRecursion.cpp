#include <iostream>
using namespace std;
int pow(int p , int q){
    if(q ==0 )return 1;
    if(q % 2 == 0){
        int result = pow(p,q/2);
        return result*result;
    }else{
        int result = pow(p,(q-1)/2);
        return p*result*result;
    }
}
int fun (int n, int d){
    if(n == 0) return 0;
    return pow(n%10, d) + fun(n/10, d);
}

int main(){
    int n;
    cin>>n;
    int digit = 0; 
    int temp = n;
    while(temp >0){
        temp = temp /10;
        digit ++;
    }
    int result = fun(n, digit);
    if(result == n){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}