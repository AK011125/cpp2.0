#include <iostream>
#include<vector>

using namespace std;

void prefixsum(vector<int> &v){
    for (int i = 1; i<v.size();i++){
        v[i] = v[i]+v[i-1];
    }
    return ;
}
int main(){
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;

    vector<int> v;
    for(int i =0; i<n; i++){
        int ele;
        cout<<"Enter "<<i+1<<" element : "<<endl;
        cin>>ele;
        v.push_back(ele);
    }

    prefixsum(v);

    for(int i =0;i<n; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}