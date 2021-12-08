#include <iostream>
#include <set>
using namespace std;


int main() {

	int testcase,output = 0;
	cin >> testcase;
	multiset<int> input;
	for (int i = 0,num; i < testcase; i++) {
		cin >> num;
		input.insert(num);
	}
	int sum = 0;
	for (multiset<int>::iterator it = input.begin(); it != input.end(); it++) {
		sum += *it;
		output += sum;
	}
	cout << output;
	return 0;
}
