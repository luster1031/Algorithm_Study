#include<iostream>
#include<vector>
using namespace std;
int main() {
	long long testcase;
	long long min = 100001;
	long long min_col = 0;
	vector<long long> cost;
	vector<long long> Village;
	cin >> testcase;

	for (int i = 0,num; i < testcase-1; i++) {
		cin >> num;
		cost.push_back(num);
	}
	for (int i = 0,num; i < testcase; i++) {
		cin >> num;
		Village.push_back(num);
		//젤 작은 마을 번호 
		if (num < min && i!= testcase-1) {
			min = num;
			min_col = i;
		}
	}
	long long output = 0;
	for (int i = 0; i < testcase; i++) {
		if(i < min_col)
			output += Village[i] * cost[i];
		else {
			int sum = 0;
			for (int j = i; j <= testcase - 1; j++) {
				sum += cost[j];
			}
			output += (Village[i] * sum);
			break;
		}
	}
	cout << output;
	return 0;
}
