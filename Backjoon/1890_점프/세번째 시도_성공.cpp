#include<iostream>
using namespace std;

int N;
int input_array[101][101];
long long route[101][101] = { 0 };

int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> input_array[i][j];
	
	route[0][0] = 1;
	for(int row = 0; row<N; row++)
		for (int col = 0; col < N; col++) {
			if (input_array[row][col] != 0 && route[row][col]!= 0) {
				if (row + input_array[row][col] < N)
					route[row + input_array[row][col]][col] += route[row][col];
				if (col + input_array[row][col] < N)
					route[row][col + input_array[row][col]] += route[row][col];
			}
		}
	cout << route[N-1][N-1];
	return 0;
}
