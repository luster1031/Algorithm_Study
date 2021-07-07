#include <iostream>
#include<algorithm>

using namespace std;
int total_day;
int time[16] = { 0 };
int pay[16] = { 0 };
int max_pay = 0;

int find_answer(int sum_pay, int col) {
	if (col >= total_day) {
		max_pay = max(max_pay, sum_pay);
	}
	else {
		for (int i = col; i < total_day; i++) {
			if(i + time[i] <= total_day)
				find_answer(sum_pay + pay[i], i + time[i]);

		}
		max_pay = max(max_pay, sum_pay);
	}
	return 0;
}

int main() {
	cin >> total_day;
	for (int i = 0,t, p; i < total_day; i++) {
		cin >> t >> p;
		time[i] = t;
		pay[i] = p;
	}
	//처음부터 돌기
	for (int i = 0; i < total_day; i++) {
		find_answer(0, i);
	}
	cout << max_pay;
	return 0;
}
