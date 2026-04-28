#include<iostream>
#include<vector>
using namespace std;      //prefix sum 2 D array

int Prefixsum(vector<vector<int>> & v, int n){
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

    for(int i = 0 ; i< n; i++){
        for(int j = 1; j< n; j++){
            v[i][j] = v[i][j] + v[i][j-1];
        }
    }
    

    for(int i = 0 ; i< n; i++){
        for(int j = 0; j< n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 1 ; i< n; i++){
        for(int j = 0; j< n; j++){
            v[i][j] = v[i][j] + v[i-1][j];
        }
    }

    cout<<endl;

    for(int i = 0 ; i< n; i++){
        for(int j = 0; j< n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    int sum = 0;


    sum = v[c][d] - v[a-1][d] - v[c][b-1] + v[a-1][b-1]; //this is for a,b,c,d > 0
    
    return sum ;
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
    ans = Prefixsum(v , n);

    cout<<"Sum is : "<<ans;

    return 0;
}