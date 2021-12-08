#include<iostream>
using namespace std;

int main() {
	int zero[41] = {1,0,1,};
	int one[41] = { 0,1,1, };
	for (int i = 3; i < 41; i++) {
		zero[i] = zero[i - 1] + zero[i - 2];
		one[i] = one[i - 1] + one[i - 2];
	}

	int N,T; 
	cin >> N;
	while (N--) {
		cin >> T;
		cout << zero[T] << " " << one[T] << "\n";
	}
	return 0;
}
