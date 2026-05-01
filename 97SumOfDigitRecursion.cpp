#include <iostream>
using namespace std;
int sum (int n){
    if(n<= 9 && n>= 0){
        return n;
    }else{
        return sum(n/10) + (n%10);
    }
}
int main(){
    int n ;
    cout<<"Enter a no : ";
    cin>>n;

    int ans = sum(n);
    cout<<"Summ of its digit is : "<<ans;
    return 0;
}