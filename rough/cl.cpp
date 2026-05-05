#include<bits/stdc++.h>
using namespace std;

class timer{
    private:
    int seconds_;

    public:
    timer(int n): seconds_(n){};

    timer& tick(){
        seconds_++;
        return *this;
    }

    timer& reset(){
        seconds_ = 0;
        *this;
        return *this;
    }

    int sc()const{
        return seconds_;
    }

};

int main(){
    timer t1(3);
    t1.tick();
    cout<<t1.sc()<<endl;
    t1.tick();
    cout<<t1.sc()<<endl;
    t1.tick();
    cout<<t1.sc()<<endl;
    t1.reset();
    cout<<t1.sc()<<endl;
}
