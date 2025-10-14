#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>&v){
    int TotalSum = 0;
    for(int i =0; i<v.size();i++){
        TotalSum +=v[i];
    }
    int presum = 0;
    for(int i =0; i<v.size();i++){
        presum += v[i];
        int sufsum = TotalSum - presum ;

        if(sufsum == presum){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i =0 ; i<n;i++){
        int ele ;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<check(v)<<endl;

   return 0;
}