#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
	int output[1001][1001] = { 0 };
	vector<int> answer;
	int col = 0, row = 0;
	int count = 1;
	int size = n;
	for (int k = 0; !output[col][row]; k += 2) {
		for (; col < n; col++) {
			if (!output[col][row]) {
				output[col][row] = count++;
			}
		}
		if (n == 0)break;
		col--;
		row++;
		for (; row < n; row++) {
			if (!output[col][row]) {
				output[col][row] = count++;
			}
			else break;
		}
		row--;
		n--;
		for (int i = 1; i < n && (col <= size && row <= size); i++) {
			if (!output[col - i][row - i]) {
				output[col - i][row - i] = count++;
			}
			else break;
		}

		col = k + 2;
		row = k + 1;
	}


	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (output[i][j])
				answer.push_back(output[i][j]);
		}
	}
	return answer;
}

int main() {

	solution(5);
}
