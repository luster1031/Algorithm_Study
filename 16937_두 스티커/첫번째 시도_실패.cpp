#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int max_sum = 0;
int h, w;
bool check = false;
int testcase;
vector<pair<int, int>> input;


//넓이, 높이, 개수, 행 번호, 넓이 값
int find_max(int width, int high, int count, int col, int sum) {
	if (count >= 2) {
		max_sum = max(max_sum, sum);
		check = true;
	}
	else {
		for (int i = col+1; i < testcase; i++) {
			if (input[i].first <= w && input[i].second <= h) {
				//가로-가로, 세로-세로
				//가로-세로, 세로-가로
				if (width + input[i].first <= w || high + input[i].second <= h)
					find_max(width + input[i].first, high + input[i].second, count + 1, i, sum + input[i].first * input[i].second);
				if (width + input[i].second <= w || high + input[i].first <= h)
					find_max(width + input[i].second, high + input[i].first, count + 1, i, sum + input[i].first * input[i].second);
			}
		}
	}
	return 0;
}	

int main() {

	
	int output = 0;//최대 넓이
	cin >> h >> w >> testcase;
	for (int i = 0,one,two; i < testcase; i++) {
		cin >> one >> two;
		input.push_back(pair<int, int>(one, two));	
	}
	sort(input.begin(), input.end());

	for (int i = 0; i < testcase; i++) {
		find_max(input[i].first, input[i].second, 1, i, input[i].first * input[i].second);
		find_max(input[i].second, input[i].first, 1, i, input[i].first * input[i].second);
	}
	if (!check)
		cout << "0";
	else cout << max_sum;
	return 0;
}
