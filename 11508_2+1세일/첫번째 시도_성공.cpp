#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> input;
	int testcase;
	int sum_output = 0;
	cin >> testcase;
	for (int i = 0, num; i < testcase; i++) {
		cin >> num;
		input.push_back(num);
	}

	sort(input.begin(), input.end());
	for (int i = 1; i <= testcase; i++) {
		if (i % 3 != 0) {
			sum_output += input[testcase - i];
		}
	}

	cout << sum_output;
	return 0;
}
