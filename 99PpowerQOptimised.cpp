#include <iostream>
using namespace std;
int power(int p , int q){
    if(q ==0){
        return 1;
    }else if(q % 2 ==0){
        int result = power(p, q/2);
        return result * result;
    }else{
        int result = power(p, (q-1)/2);
        return p* result * result;
    }
}
int main(){
    int p,q;
    cin>>p>>q;
    int ans = power(p,q);
    cout<<ans;
    return 0;
}

//Now time complexity is - O(log q)
//Earlier it was         - O(q)