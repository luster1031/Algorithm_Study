#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
long long end_num = 0;
long long max_count = 0;
int Repetition(long long num, long long count) {
	if (num == end_num) {
		max_count = min(count, count);
	}
	else {
		if ((num * 2) <= end_num) {
			Repetition(num * 2, count + 1);
			string number = to_string(num);
			number += '1';
			//cout << number;
			Repetition(stoll(number), count + 1);
		}
	}
	return 0;
}
int main() {
	long long start;
	cin >> start >> end_num;
	Repetition(start,0);
	if (max_count == 0)
		cout << "-1";
	else 
		cout << max_count+1;
	return 0;
}
