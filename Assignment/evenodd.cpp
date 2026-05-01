#include<bits/stdc++.h>
using namespace std;

bool evenodd(int n){
    if(n%2==0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int a;
    cout<<"Enter a number to check even or odd :";
    cin>>a;
    string s = (evenodd(a)==1)?"True":"False";
    cout<<s;
    return 0;
}