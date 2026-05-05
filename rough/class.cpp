#include<iostream>
#include<string>
#include<vector>

using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	vector<int> ar = { 0,1,2,3,4,5,6,7,8,9 };
	int n = ar.size();
	for (int i = 0; i < (ar.size()) / 2; i++) {
		swap(ar[i], ar[n-1-i]);
	}

	for (int i = 0; i < n; i++) {
		cout << ar[i] << " ";
	}
}