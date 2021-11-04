#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n; //삼각형의 크기 
	int Triangle[501][501];
	int max_num = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++)
			cin >> Triangle[i][j];

	for (int row = n - 2; row >= 0; row--) {
		for (int col = 0; col <= row; col++) {
			Triangle[row][col] += max(Triangle[row + 1][col], Triangle[row + 1][col + 1]);
		}
	}
	cout << Triangle[0][0];

	return 0;
}
