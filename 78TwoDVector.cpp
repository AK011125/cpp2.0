#include <iostream>
#include <vector>
using namespace std;
int main (){
    int n, m;
    cin >> n >> m;   // input rows and columns
    vector <vector<int>> v (n,vector<int>(m)); // intitalise a n*m 2d vector

    //or
    vector <int> v1 = {1,2,3};
    vector <int> v2 = {4,5,6};
    vector <int> v3 = {7,8,9};
    vector <vector<int>> v4 = {v1,v2,v3}; //3*3 vector of v1 v2 v3 


    return 0;
}