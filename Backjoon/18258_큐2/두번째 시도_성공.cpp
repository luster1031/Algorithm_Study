#include<iostream>
#include <queue>
#include<string>
using namespace std;
int main() {
	cin.tie(0);
	cin.sync_with_stdio(0);

	queue<int> input;
	int N, number;
	string str;

	cin >> N;
	while (N--) {
		cin >> str;
		if (str == "push") {
			cin >> number;
			input.push(number);
		}
		else if (str == "pop") {
			if (input.empty()) cout << "-1\n"; 
			else {
				cout << input.front() << "\n";
				input.pop();
			}
		}
		else if (str == "size")
			cout << input.size() << "\n";
		else if (str == "empty")
			if (input.empty())	cout << "1\n";
			else cout << "0\n";
		else if (str == "front") {
			if (input.empty()) cout << "-1\n";
			else  cout << input.front() << "\n";
		}
		else
			if (input.empty())
				cout << "-1\n";
			else cout << input.back() << "\n";
	}

	return 0;
}
