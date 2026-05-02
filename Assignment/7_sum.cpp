#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> ar = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> sum = {0,0,0};
    for(int i= 0; i<3; i++){
        for(int j=0 ; j<3 ; j++){
            sum[i] += ar[i][j];
        }
        cout<<endl<<sum[i];
    }
}