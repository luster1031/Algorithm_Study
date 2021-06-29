#include<iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	set<int> input;
	int testcase;
	cin >> testcase;
	long long max_num = 0;
	for (int i = 0,num; i < testcase; i++) {
		cin >> num;
		input.insert(num);
	}
	int i = testcase;
	for (set<int>::iterator it = input.begin(); it != input.end(); it++) {
		long long cal_num = (i--) * (*it);
		if(max_num < cal_num)
			max_num = cal_num;
	}
	cout << max_num;

	return 0;
}
