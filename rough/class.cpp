#include<bits/stdc++.h>
using namespace std;

class counter{
    private:
    int count;

    public:
    counter(int n){
        count = n;
    }

    int dec(){
        if(count>0){
            count--;
            return count;
        }
    }

    int inc(){
        count++;
        return count;
    }

    void reset(){
        count = 0;
    }

    void getc(){
        cout<<count<<endl;
    }
};

int main(){
    counter c1(3);
    c1.inc();
    c1.getc();
    c1.dec();
    c1.getc();
    c1.dec();
    c1.getc();
    c1.dec();
    c1.reset();
    c1.getc();
}