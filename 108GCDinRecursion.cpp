#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(b> a) return gcd(b,a);
    if(b == 0) return a;
    return gcd(b, a%b);
}
int main(){
    int x = gcd(40,48);
    cout<<x;
    return 0;
}

//if we subtract a smaller no from a larger no 
//(we can reduce the larger no) but the GCD is same
// or will not change 

//GCD of 54 and 18 is same as (54-18) and  18

// same for division also
//72 and 54 have same GCD as 54 and 18 