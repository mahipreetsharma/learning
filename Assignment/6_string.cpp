#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "mahipreet"; 
    
    int end = s.length()-1;
    int start = 0;
    while(start<end){
        char temp= s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
    cout<<s;

    return 0;
}
