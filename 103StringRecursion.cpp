#include<iostream>
using namespace std;

string fun(string &str, int idx, int n){

    if(idx == n) return "";
    string curr = "";
    curr += str[idx];
    return (((str[idx] == 'a')? "" : curr) + fun(str,idx+1, n));
}
int main(){
    string str = "abcax"; 
    int n = 5;
    cout<<fun(str, 0 , n); //it will return bcx    (string without a)

    return 0;
}