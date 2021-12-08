#include<iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int input[100001];
	int testcase;
	cin >> testcase;
	long long max_num = 0;
	for (int i = 0,num; i < testcase; i++) {
		cin >> num;
		input[i] = num;
	}
	sort(input, input + testcase);
	
	for (int i = 0,mul = testcase; i < testcase; i++) {
		long long cal_num = (mul--) * input[i];
		if(max_num < cal_num)
			max_num = cal_num;
	}
	cout << max_num;

	return 0;
}
