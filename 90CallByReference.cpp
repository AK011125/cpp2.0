#include<iostream>
using namespace std;
void change(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

}

void swap(int x, int y){
    int temp = x;
    x= y;
    y = temp;
}

int main(){
    int x = 10;
    int y = 20;

    swap(x,y);

    cout<<"x : "<<x<<" "<<"y : "<<y<<endl; // value didnt change

    int *ptrx = &x;
    int *ptry = &y;

    change(ptrx, ptry);

    cout<<"x : "<<x<<" "<<"y : "<<y; // value change

    return 0;
}