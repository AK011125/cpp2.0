#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<endl;
    cout<<"Original :- ";
    cout<<endl;

    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int transpose[m][n];
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            transpose[i][j]=arr[j][i];
        }
    }
    cout<<endl;

    int rotated[m][n];
    for(int i =0; i<m;i++){
        for(int j =0; j<n;j++){
            rotated[i][j] = transpose[i][n-j-1];
        }
    }

    cout<<endl;
    cout<<"Transpose :-";
    cout<<endl;

    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Rotated :-";
    cout<<endl;

    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            cout<<rotated[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}