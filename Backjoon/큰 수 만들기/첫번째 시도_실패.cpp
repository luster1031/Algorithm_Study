#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int max_output = 0;
int cal(string number, int k, int count, int row, string str_num) {
	if (count == number.size() - k) {
		max_output = max(max_output, stoi(str_num));
		return 0;
	}
	for (; row <= number.size(); row++) {
		str_num.push_back(number[row]);
		cal(number, k, count + 1, row+1, str_num);
		str_num.erase(count);
	}
}
string solution(string number, int k) {
	string answer = "";
	for (int i = 0; i < number.size() && i<= k; i++)
		cal(number, k, 0, i, "");
	answer = to_string(max_output);
	return answer;
}

int main() {
	cout << solution("1924", 2);
	return 0;

}
