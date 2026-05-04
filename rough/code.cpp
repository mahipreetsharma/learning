#include<bits/stdc++.h>
using namespace std;

class bank{
    private:
    string owner;
    int bal;

    public:
    bank(string na){
        na = owner;
    }

    void deposit(int n){
        bal +=n;
    }

    void withdraw(int n){
        if(bal>n)
        { 
            bal-=n;
            cout<<"current balance :"<<bal;
        }else{
            cout<<"insufficient";
        }
    }

    void transfer(bank &re, int n){
        if(bal>n){
            bal-=n;
            re.bal+=n;
        }else{
            cout<<"insufficient";
        }
    }
};

int main(){
    bank a("a");
    bank b("b");

    b.deposit(500);
    a.deposit(600);

}   