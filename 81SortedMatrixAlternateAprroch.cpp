#include<iostream>
#include<vector>
using namespace std;
int rowWithMax1s(vector<vector<int>>& v){
    int n = v.size();
    int m = v[0].size();

    int i = 0, j = m - 1;
    int ans = -1;

    while(i < n && j >= 0){
        if(v[i][j] == 1){
            ans = i;
            j--;
        } else {
            i++;
        }
    }

  

    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>>v(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j< n;j++){
            cin>>v[i][j];
        }
        cout<<endl;
    }

    int ans = rowWithMax1s(v);
    cout<<ans;
    
    return 0;
}