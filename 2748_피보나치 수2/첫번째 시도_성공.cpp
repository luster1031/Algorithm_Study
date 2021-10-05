#include<iostream>
using namespace std;

int main() {
	long long frist = 0, second = 1;
	long long sum;
	int input;
	cin >> input;
	
	for (int i = 0; i <= input-2; i++) {
		sum = frist + second;
		frist = second;
		second = sum;
	}
	cout << second;
	return 0;
}
