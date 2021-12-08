#include<iostream>
#include<map>
using namespace std;

int main() {
	map<int, int> m;
	int testcase;
	int row, hight;
	int max_row = 0, max_hight = 0;
	int sum = 0;
	int last_row = 0;
	cin >> testcase;
	while (testcase--) {
		cin >> row >> hight;
		m.insert(pair<int, int>(row, hight));
		if (max_hight <= hight) {
			max_hight = hight;
			max_row = row;
		}
		if (last_row < row) {
			last_row = row;
		}
	}

	map<int, int>::iterator iter;
	iter = m.begin();
	int my_row = iter->first;
	int my_hight = iter->second;
	iter++;
	for (; my_row != max_row; iter++) {
		if (my_hight <= iter->second) {
			sum += (iter->first - my_row) * my_hight;
			my_row = iter->first;
			my_hight = iter->second;
		}
		
	}
	sum += my_hight;
	
	iter = m.lower_bound(last_row);

	my_row = iter->first;
	my_hight = iter->second;
	iter--;
	for (; my_row != max_row; iter--) {
		if (my_hight <= iter->second) {
			sum += (my_row - iter->first) * my_hight;
			my_row = iter->first;
			my_hight = iter->second;
		}
	}
	cout << sum;
	return 0;
}