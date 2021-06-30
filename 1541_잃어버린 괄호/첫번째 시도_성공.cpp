#include <iostream>
#include<sstream>
#include<string>
#include <stack>

using namespace std;
int main() {
	stringstream ss;
	string input;
	stack<int> number;

	int num;
	int sum = 0;
	cin >> input;
	ss.str(input);
	bool check = false;
	while (ss >> num) {
		if (num > 0) {
			if (sum == 0) {
				number.push(num);
			}
			else {
				if (!check) {
					number.push(num);
				}
				else {
					sum += num;
				}
			}
		}
		else {
			if (!check) {
				check = true;
				sum += num * (-1);
			}
			else {
				number.push((-1)*(sum));
				sum = num * (-1);
				check = true;
			}	
		}
	}
	if(check)
		number.push((-1)*(sum));
	int output = 0;
	for (int i = 0; !number.empty(); i++) {
		output += number.top();
		number.pop();
	}
	cout << output;
	return 0;
}
