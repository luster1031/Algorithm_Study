#include<iostream>
#include <vector>
using namespace std;

int N, M;
bool check[9];
int repetition(int start, int count,vector<int> output) {
	if (count == M) {
		for (int row = 0; row < output.size(); row++)
			cout << output[row] << " ";
		cout << "\n";
		return 0;
	}
	for (int i = start+1; i <= N; i++) {
		if (!check[i]) {
			output.push_back(i);
			check[i] = true;
			repetition(i, count + 1, output);
			check[i] = false;
			output.pop_back();
		}
	}

	return 0;
}

int main() {
	cin >> N >> M;	//개수, 자리수
	for (int i = 0; i < N; i++) {
		check[i + 1] = true;
		repetition(i+1, 1, { i+1 });
		check[i + 1] = false;
	}

	return 0;
}
