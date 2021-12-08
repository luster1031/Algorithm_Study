#include<iostream>
#include<vector>
using namespace std;
int main() {
	long long testcase;
	long long cost[100001];
	long long Village[100001];
	cin >> testcase;
	long long max = 1000000001;

	for (int i = 0,num; i < testcase-1; i++) {
		cin >> num;
		cost[i] = num;
	}
	for (int i = 0,num; i < testcase; i++) {
		cin >> num;
		Village[i] = num;
	}
	long long output = 0;
	for (int i = 0; i < testcase-1; i++) {
		if (max > Village[i])
			max = Village[i];
		output += max* cost[i];
	}
	cout << output;
	return 0;
}
