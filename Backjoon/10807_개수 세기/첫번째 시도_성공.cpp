#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, num, count = 0;
	vector<int> input;
	cin >> N;

	while (N--) {
		cin >> num;
		input.push_back(num);
	}
	cin >> num;
	for (int i = 0; i < input.size(); i++)
		if (input.at(i) == num)
			count++;
	cout << count;
	return 0;
}
