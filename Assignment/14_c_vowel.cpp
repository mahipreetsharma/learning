#include<bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    string s = "A lazy dog jumps over a bridge";
    int n = s.length();
    for(int i=0; i<n; i++){
        if(s[i]=='A'|| s[i]=='a'|| s[i]=='E'||s[i]=='e'||s[i]=='I' || s[i]=='i' || s[i]=='O'|| s[i]=='o' || s[i]=='U'||s[i]=='u'){
            count++;
        }
    }
    cout<<count;
}