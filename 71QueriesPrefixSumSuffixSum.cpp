#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;

    vector<int> v(n+1,0);
    for (int i = 1; i<=n;i++){
        cout<<"Enter the "<<i<<" element of vector : ";
        cin>>v[i];
    }
    // Calculating prefix sum array
    for(int i =1;i<=n;i++){
        v[i]+=v[i-1];
    }

    int q;
    cout<<"Enter the no of queries : ";
    cin>>q;

    while(q--){
        int l,r;
        cout<<"Enter the 1st element index : ";
        cin>>l;
        cout<<"Enter the last element index : ";
        cin>>r;

        int ans = 0;
        //ans = prefixsumarray[l] - prefixsumarray[r-1]
        ans = v[r] - v[l-1];
        cout<<ans<<endl;
    }

    return 0;
}