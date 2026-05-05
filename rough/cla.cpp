#include<bits/stdc++.h>
using namespace std;

class date{
    private:
    string month_;
    int day_;
    int year_;

    public:
    date(){
        month_ = "January";
        day_ = 1;
        year_=200;
    }

    date(string m, int d, int y){
        month_ = m;
        day_ = (d<31)?d : 1;
        year_ = y;
    };

    date(string m, int y){
        month_ = m;
        day_ =1;
        year_ = y;
    }

};

int main(){
    date d1;
    date d2("may",2,2026);
    date d3("june",2006);

}