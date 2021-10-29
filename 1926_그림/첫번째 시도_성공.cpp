#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int painting_area = 0;
int painting_count = 0;
int n, m;
int array_cal[501][501] = { 0 };
int cal(int area,int row, int col) {
	array_cal[row][col] = 0;
	if (row+1 < n && array_cal[row + 1][col])
		area = cal(area + 1, row + 1, col);
	if (col +1 < m && array_cal[row][col+1])
		area = cal(area + 1, row, col+1);
	if (row -1 >= 0 && array_cal[row - 1][col])
		area = cal(area + 1, row - 1, col);
	if (col-1 >= 0 && array_cal[row][col-1])
		area = cal( area + 1, row, col-1);
	painting_area = max(painting_area, area);
	return area;
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> array_cal[i][j];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (array_cal[i][j]) {
				painting_count++;
				cal(1, i, j);
			}
		}
	}

	cout << painting_count << "\n" << painting_area; 
	return 0;
}
