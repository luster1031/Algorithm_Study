#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int max_sum = 0;
int h, w;
int testcase;
vector<pair<int, int>> input;
bool check_ok(int w1, int h1, int w2, int h2) {
	if (w1 > w || h1 > h || w2 > w || h2 > h)return false;
	if (w1 + w2 <= w && max(h1, h2) <= h)return true;
	if (max(w1, w2) <=  w && h1+h2 <= h)return true;
	return false;
}
int find_answer(int w1, int h1, int w2, int h2) {
	int sum = 0;
	int sum1, sum2, sum3, sum4;
	if (check_ok(w1, h1, w2, h2))
		max_sum = max(max_sum, w1*h1 + w2 * h2);
	if (check_ok(w1, h1, h2, w2))
		max_sum = max(max_sum, w1*h1 + w2 * h2);
	return sum;
}

int main() {
	cin >> h >> w >> testcase;
	for (int i = 0,one, two; i < testcase; i++) {
		cin >> one >> two;
		input.push_back(pair<int, int>(one, two));
	}
	sort(input.begin(), input.end());

	for (int i = 0; i < testcase; i++) {
		for (int j = i+1; j < testcase; j++) {
			find_answer(input[i].first, input[i].second, input[j].first, input[j].second);
			find_answer(input[i].second, input[i].first, input[j].first, input[j].second);
		}
	}

	cout << max_sum;
	return 0;
}
