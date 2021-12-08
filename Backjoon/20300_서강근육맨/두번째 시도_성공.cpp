#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {

	int testcase;
	cin >> testcase;
	vector<long long> input;
	long long output_max = 0;
	long long num;
	for (int i = 0; i < testcase; i++) {
		cin >> num;
		input.push_back(num);
	}

	sort(input.begin(), input.end());
	int add_num = 1;
	if (testcase % 2 == 1) {
		output_max = max(output_max, input[testcase - 1]);
		add_num = 2;
	}
	for (int i = 0, end = testcase - add_num; i < testcase / 2; i++,end--) {
		output_max = max(output_max, input[i] + input[end]);
	}
	cout << output_max;
	return 0;
}
