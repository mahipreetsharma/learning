#include<bits/stdc++.h>
using namespace std;

int sumofPositive(vector<int> n){
    int s = n.size();
    int sum = 0;
    for(int i=0; i<s; i++){
        if(n[i]>0){
            sum+=n[i];
        }
    }
    return sum;
}

int main(){
    vector<int> ar = {1,-1,2,-2,3,-3};
    cout<<sumofPositive(ar);
    return 0;
}