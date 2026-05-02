#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {2,5,2,8,5,10,12,34,66,12};
    int n = a.size();
    set<int> b(a.begin(),a.end());
    a.assign(b.begin(),b.end());
    for(int i=0; i<b.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}