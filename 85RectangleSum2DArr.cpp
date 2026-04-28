#include <iostream>
#include <vector>
using namespace std;

int Prefixsum(vector<vector<int>> & v){
    int a;
    cout<<endl<<"Enter the l1 : ";
    cin>>a;

    int b;
    cout<<endl<<"Enter the r1 : ";
    cin>>b;

    int c;
    cout<<endl<<"Enter the l2 : ";
    cin>>c;

    int d;
    cout<<endl<<"Enter the r2 : ";
    cin>>d;

    int sum = 0;
    for(int i = a ; i< b; i++){
        for(int j = c; j< d; j++){
            sum = sum + v[i][j];
        }
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the dimensions of matrix : ";
    cin>>n;

    cout<<endl;

    cout<<"Enter the elements of matrix : "<<endl;
    vector <vector<int>> v (n,vector<int>(n));

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            cin>>v[i][j];
        }
        cout<<endl;
    }

    int ans ;
    ans = Prefixsum(v);

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }

    cout<<"Sum is : "<<ans;

    return 0;
}