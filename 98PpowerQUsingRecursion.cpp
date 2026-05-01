#include <iostream>
using namespace std;
int power(int p , int q){
    if(q>0){
        return p * power(p,q-1);
    }else{
        return 1;
    }
}
int main(){
    int p, q;
    cout<<"Enter two numbers : ";
    cin>>p>>q;

    int ans = power(p,q);
    cout<<ans;
    return 0;
}