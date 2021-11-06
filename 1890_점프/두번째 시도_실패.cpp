#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int N;
int input_array[101][101];
long long route[101][101] = { 0 };
int cal(int row, int col) {
	if (route[row][col] != 0)
		route[row][col] += 1;
	else
		route[row][col] = 1;

	if (col + input_array[row][col] < N && input_array[row][col]!= 0)
		cal(row, col + input_array[row][col]);
	if (row + input_array[row][col] < N && input_array[row][col] != 0)
		cal(row + input_array[row][col], col);
	
	return 0;
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> input_array[i][j];
	
	//옆으로
	cal(0, input_array[0][0]);
	//아래로
	cal(input_array[0][0], 0);
	cout << route[N-1][N-1];
	return 0;
}
