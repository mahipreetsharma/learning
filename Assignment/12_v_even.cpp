#include<bits/stdc++.h>
using namespace std;

vector<int> even(vector<int>a){
    int n = a.size();
    vector<int> even;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            even.push_back(a[i]);
        }
    }
    return even;
}

int main(){
    vector<int> ar = {1,2,3,4,5,6,7,8};
    even(ar);
}