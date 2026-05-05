#include<bits/stdc++.h>
using namespace std;

class counter {
private:
	int count = 0;

public:
   	counter(int n) : count(n) { count++; }
	void getcount() {
		cout << count;
	}
};

int main() {
	counter num(6);
	counter sum(6);
	num.getcount();
}