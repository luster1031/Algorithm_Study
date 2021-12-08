#include <iostream>
#include<algorithm>
using namespace std;

int n; //삼각형의 크기 
int Triangle[501][501];
int max_num = 0;

int cal(int row,int col,int add_num) {
	if (row >= n - 1) {
		max_num = max(add_num, max_num);
		return 0;
	}
	cal(row + 1, col, add_num + Triangle[row+1][col]);
	cal(row + 1, col+1, add_num + Triangle[row + 1][col+1]);
	return 0;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++)
			cin >> Triangle[i][j];
	cal(0, 0, Triangle[0][0]);
	cout << max_num;
	return 0;
}
