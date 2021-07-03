#include <iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	vector<pair<int, int>> input;//종료시간 정렬
	int testcase;
	int max_num = 0;
	int count = 1;

	cin >> testcase;

	for (int i = 0, start, end; i < testcase; i++) {
		cin >> start >> end;
		input.push_back(make_pair(end, start));
		max_num = max(max_num, start);
	}
	sort(input.begin(), input.end());// 정렬
	int end_time_max = input[0].first; //종료시간 값

	for (int i = 1; i < input.size(); i++) {
		//끝시간 같은거 패스
		if (input[i].second >= end_time_max) {
			count++;
			end_time_max = input[i].first;
		}
	}
	cout << count;
	
	return 0;
}
