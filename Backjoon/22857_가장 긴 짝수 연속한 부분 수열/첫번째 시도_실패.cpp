#include <iostream>
#include<vector>
using namespace std;

int main() {
	int N, elimination;
	int count = 0;
	vector<int> input;
	cin >> N >> elimination;
	for (int i = 0,num; i < N; i++) {
		cin >> num;
		input.push_back(num);
		if (num % 2 == 0)count++;
	}
	if (input[elimination - 1] % 2 == 0)cout << count-1;
	else cout << count;

	return 0;
}
