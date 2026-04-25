#include<iostream>
using namespace std;

int palindrome(string s){
    int n  = s.length();
    int a ;
    for(int i = 1; i<=n; i++){
        if(s[i]==s[n-i-1]){
            a = 1;
        }else{
            a = 0;
        }
    }
    if(a == 1){
        cout<<"It is palindrome";
    }else{
        cout<<"It is not palidrome";
    }
}

int main(){
    string a = "amaama";
    // cout<<"Enter a string to check palindrome";
    // cin>>a;
    palindrome(a);
    return 0;
}
