#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int number;
vector<int> stairs;
bool check[301];
int max_score = 0;
int up(int row,int score) {
	if (row == number - 1)
		max_score = max(max_score, score);
	else {
		if (row + 1 < number && (row == 0 || (row - 1 >= 0 && (!check[row - 1] || !check[row])))) {
			check[row + 1] = true;
			up(row + 1, score + stairs[row + 1]);
			check[row + 1] = false;
		}
		if (row + 2 < number) {
			check[row + 2] = true;
			up(row + 2, score + stairs[row + 2]);
			check[row + 2] = false;
		}
	}
	return 0;
}

int main() {
	

	cin >> number;
	for (int i = 0, num; i < number; i++) {
		cin >> num;
		stairs.push_back(num);
	}

	//첫번째부터
	check[0] = true;
	up(0, stairs[0]);
	check[0] = false;
	//두번째부터
	check[1] = true;
	up(1, stairs[1]);
	
	cout << max_score;
	return 0;
}
