#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter row number : ";
    cin>>n;

    vector <vector<int>> a (n, vector<int>(n));

    for(int i = 0; i< n; i++){
        for(int j = 0; j< i;j++){
            cout<<"Enter element of row "<<i<<" : ";
            cin>>a[i][j];
        }
        cout<<endl;
    }

    for(int i = 0; i< n; i++){
        for(int j = 0; j< i;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }

    return 0;
}