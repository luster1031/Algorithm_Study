#include<iostream>
#include <map>
#include<algorithm>

using namespace std;


int main() {
	multimap<int, int> input;
	int count[100001] = {0};
	int testcase;
	cin >> testcase;
	for (int i = 0, one, two; i < testcase; i++) {
		cin >> one >> two;
		input.insert(pair<int, int>(one, two));
	}
	multimap<int, int>::iterator itr = input.end();
	itr--;
	int last_num = int(itr->first);
	cout << '\n';
	for (multimap<int, int>::reverse_iterator itr = input.rbegin(); itr != input.rend(); ++itr) {
		int num = itr->second ;
		int num1 = itr->first;
		cout << num <<' ' << num1 <<'\n';
		if (num > last_num) {
			count[itr->first] = 1;
		}
		else {
			count[itr->first] = count[num] + 1;
		}
	}
	cout << *min_element(count, count + testcase);
	return 0;
}
