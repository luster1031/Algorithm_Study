#include <iostream>
#include<algorithm>
using namespace std;


int main() {
	int N;
	int score[301];
	int max_score[301];

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> score[i + 1];
	}
	max_score[1] = score[1];
	max_score[2] = score[1] + score[2];
	max_score[3] = score[1] + score[3];

	for (int i = 4; i <= N; i++) {
		max_score[i] = max(score[i] + max_score[i - 2], max_score[i - 3] + score[i - 1] + score[i]);
	}
	cout << max_score[N];
	return 0;
}
