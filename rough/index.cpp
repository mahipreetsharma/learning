#include<bits/stdc++.h>
using namespace std;

class rec{
    private:
    int width;
    int hight;

    public:
    rec(int w, int h){
        width = w;
        hight = h;
    }

    int area(){
        return width*hight;
    }

    int par(){
        return 2*(width*hight);
    }

    string isSquare(){
        if(width == hight){
            return "true";
        }else{
            return "false";
        }
    }
};

int main(){
    rec r1(12,3);
    cout<<r1.area()<<endl;

    rec r2(4,10);
    cout<<r2.isSquare()<<endl;
    cout<<r2.par()<<endl;

    rec r3(15,15);
    cout<<r3.isSquare();
}