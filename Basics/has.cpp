#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,1,2,2,2,3,4,5,6,7,8,5,3,2,3};
    map<int,int> a;

    for(int i=0; i<arr.size();i++){
        a[arr[i]]++;
    }

    for(auto x: a){
        cout<<x.first<<"   "<<x.second<<endl;
    }

    cout<<a[4];
}