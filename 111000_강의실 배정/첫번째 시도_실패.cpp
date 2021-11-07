#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

bool check[200002];
int N;
int input_array[200001][2];
int cal( int row, int time, int row_count) {
	if (row >= N-1)	return row_count;

	for (int i = row; i < N; i++) {
		if (!check[i] && time == input_array[i][0]) {
			check[i] = true;
			row_count = cal(i + 1, input_array[i][1],row_count+1);
		}
	}
	return row_count;
}
int main() {
	int min_room = 200002;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input_array[i][0] >> input_array[i][1];
	}
	
	for (int i = 0; i < N; i++) {
		int room_count = i, row_count = i;
		if (row_count <= N) {
			for (int j = i; j < N; j++) {
				if (!check[j]) {
					check[j] = true;
					room_count++;
					row_count = cal(j, input_array[j][1], row_count + 1);
				}
			}
			min_room = min(room_count, min_room);
			memset(check, false, sizeof(check));
		}
	}
	
	cout << min_room;
	
	return 0;
}
