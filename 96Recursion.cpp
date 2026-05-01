#include <iostream>
using namespace std;
int fac(int n){
    if(n>1){
        n = n*fac(n-1);
    }else{
        n = 1;
    }
    return n;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int ans = fac(n);
    cout<<"factorial of "<<n<<" is : "<<ans;
    return 0;
}