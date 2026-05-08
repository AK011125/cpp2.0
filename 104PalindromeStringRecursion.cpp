#include<iostream>
using namespace std;
bool fun(int num, int *temp){
    if(num >= 0 and num <= 9){
        int lastDigitOfTemp = (*temp)%10;
        (*temp) /= 10;
        return (num == lastDigitOfTemp);
    }
    bool result = (fun(num/10, temp) and (num%10) == ((*temp)%10));
    (*temp) /= 10;
    return result ;
}
int main(){
    int num = 123221;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout<<fun(num, temp);
    return 0;
}