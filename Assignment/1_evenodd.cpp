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
    for(int i=1; i<=20; i++){
    string s = (evenodd(a)==1)?"True":"False";
    cout<<i<<" "<<s<<endl;
    }
    return 0;
}