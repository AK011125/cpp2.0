#include <iostream>
using namespace std;
int main(){
    int x = 20;
    double y = 3.34;
    int *ptr = &x;

    cout<<"Size of x is : "<<sizeof(x)<<endl;
    cout<<"Size of y is : "<<sizeof(y)<<endl;

    cout<<ptr<<endl<<(ptr+1)<<endl; // +4 bcz int size is 4 here

    return 0;
}