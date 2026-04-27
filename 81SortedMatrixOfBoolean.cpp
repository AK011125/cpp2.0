#include<iostream>
#include<vector>
using namespace std;

int maxOnesFun(vector<vector<int>>&v){
    int maxOnes = 0;
    int maxOnesRow = -1;
    for(int i=0 ; i<v.size(); i++){
        for(int j=0 ; j<v[i].size(); j++){
            if(v[i][j] == 1){
                int noOfOnes = v[0].size() - j;
                if(noOfOnes > maxOnes){
                    maxOnes = noOfOnes;
                    maxOnesRow = i;
                }
            break;
            }
        }
    }
    return maxOnesRow;
}

int main(){
    int n, m;
    cout<<"Enter no of rows : ";
    cin>>n;
    cout<<"Enter no of colomns : ";
    cin>>m;

    vector<vector<int>> v(n, vector<int>(m));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>v[i][j];
        }
        cout<<endl;
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    int ans = maxOnesFun(v);
    cout<<"Index of the row with max ones is : "<<ans<<endl;
    
}