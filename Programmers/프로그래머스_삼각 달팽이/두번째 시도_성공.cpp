#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
	int output[1001][1001] = { 0 };
	vector<int> answer;
	int col = 0, row = 0;
	int count = 1;
	int extent = 0;
	for (int i= 0;!output[col][row] && i<n; i += 3) {
		extent = n - i - 1;
		for (int j =0; j< extent; col++,j++) {
			output[col][row] = count++;
		}
		for (int j = 0; j < extent; row++,j++) {
			output[col][row] = count++;
		}
		for (int j = 0; j < extent; col--, row--,j++) {
			output[col][row] = count++;
		}
		if (!output[col][row])
			output[col][row] = count++;
		row ++;
		col += 2;
	}
	

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (output[i][j])
				answer.push_back(output[i][j]);
		}
	}
	return answer;
}

int main() {

	solution(4);
}
