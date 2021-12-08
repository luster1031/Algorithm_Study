#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int N;
int input_array[101][101];
long long route[101][101] = { 0 };
int cal(int row, int col, long long route_count) {
	if (route[row][col] < route_count && route[row][col]!= 0)
		return 0;
	else
		route[row][col] = route_count;

	if (col + input_array[row][col] < N && input_array[row][col]!= 0)
		cal(row, col + input_array[row][col], route_count + 1);
	if (row + input_array[row][col] < N && input_array[row][col] != 0)
		cal(row + input_array[row][col], col, route_count + 1);
	return 0;
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> input_array[i][j];

	cal(0, input_array[0][0], 1);
	cal(input_array[0][0], 0, 1);
	cout << route[N-1][N-1];
	return 0;
}
