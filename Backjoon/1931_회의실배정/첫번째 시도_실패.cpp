#include <iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	vector<pair<int, int>> input;//종료시간 정렬
	vector<pair<int, int>> reverse_input; //시작시간 정렬
	int testcase;
	int max_num = 0;
	int compare;
	int count = 1;
	bool check = false;

	cin >> testcase;

	for (int i = 0, start, end; i < testcase; i++) {
		cin >> start >> end;
		input.push_back(make_pair(end, start));
		reverse_input.push_back(make_pair(start, end));
		max_num = max(max_num, start);
	}


	sort(input.begin(), input.end());
	sort(reverse_input.begin(), reverse_input.end());
	int min_of_col = input[0].first; //종료시간 같으면 작은 값

	for (int i = 1; i < reverse_input.size(); i++) {
		if (reverse_input[i].first >= min_of_col) {
			compare = reverse_input[i].first;
			if (min_of_col != reverse_input[i].second && min_of_col != reverse_input[i].first) {
				min_of_col = reverse_input[i].second;
				while (i != reverse_input.size() - 1 && compare == reverse_input[++i].first) {
					min_of_col = min(min_of_col, reverse_input[i].second);
					check = true;
				}
				count++;
				if (check) {
					i--;
					check = false;
				}
			}
		}
	}
	cout << count;
	
	return 0;
}
