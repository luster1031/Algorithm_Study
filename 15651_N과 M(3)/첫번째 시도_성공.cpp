#include<iostream>
#include <vector>
using namespace std;

int N, M;
int repetition(int count,vector<int> output) {
	if (count == M) {
		for (int row = 0; row < output.size(); row++)
			cout << output[row] << " ";
		cout << "\n";
		return 0;
	}
	for (int i = 1; i <= N; i++) {
			output.push_back(i);
			repetition(count + 1, output);
			output.pop_back();
	}
	return 0;
}

int main() {
	cin >> N >> M;	//개수, 자리수
	for (int i = 0; i < N; i++) {
		repetition(1, { i+1 });
	}

	return 0;
}
