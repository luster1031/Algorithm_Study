#include <iostream>
#include <vector>

using namespace std;

int cal(int small, int big) {
	int tmp;
	if (small > big) {
		tmp = big;
		big = small;
		small = tmp;
	}
	while (big% small != 0) {
		tmp = small;
		small = big % small;
		big = tmp;
		
	}
	return small;
}
int main() {
	int testcase;
	int testcase_of_line;
	int num;
	long long int output = 0;
	vector<int> input;

	cin >> testcase;
	while (testcase--) {
		cin >> testcase_of_line;
		while (testcase_of_line--) {
			cin >> num;
			input.push_back(num);
		}

		for (int i = 0; i < input.size(); i++) {
			for (int j = i + 1; j < input.size(); j++) {
				output += cal(input[i], input[j]);
			}
		}
		cout << output <<'\n';
		input.clear();
		output = 0;
	}
	return 0;
}
//함수
	//큰거 구해서
		//나누고
			//나머지가 0이면 몫이 답
			//아니면 그 나머지를 몫으로


//testcase
//vector추가 
	//for - vector크기만큼
		//i +1 부터 백터 크기만큼

//큰거