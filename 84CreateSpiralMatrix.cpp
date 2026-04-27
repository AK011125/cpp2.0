#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> createSpiralMatrix(int n){
    vector<vector<int>> v(n, vector<int> (n));

    int left = 0;
    int right = n-1;
    int top = 0;
    int bottom = n-1;

    int direction = 0;
    int value = 1;

    while(left<= right && top <= bottom){
        if(direction == 0){
            for(int i =left; i <= right; i++){
                v[top][i] =value++;
            }
            top++;
        }else if(direction == 1){
            for(int j= top; j<= bottom; j++){
                v[j][right]= value++;
            }
            right--;
        }else if(direction ==2){
            for(int i = right; i >= left; i--){
                v[bottom][i] = value++;
            }
            bottom --;
        } else{
            for(int j = bottom; j >= top; j--){
                v[j][left] = value++;
            }
            left++;
        }
        direction= (direction+1)%4;
    }
    return v;
}

int main(){
    int n ;
    cin>>n;

    vector<vector<int>> v(n, vector<int>(n));

    v = createSpiralMatrix(n);
    for(int i =0; i<n; i++){
        for(int j = 0;j<n;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
}