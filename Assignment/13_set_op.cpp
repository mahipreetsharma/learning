#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s1 = {1,2,3,4};
    set<int> s2 = {3,4,5,6};
    set<int> un;
    set<int> in;

    set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(un,un.begin()));
    for(int x:un){
        cout<<x<<" ";
    }
    cout<<endl;
        
    set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(in,in.begin()));
    for(int x:in){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}