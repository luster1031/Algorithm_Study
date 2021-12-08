#include<iostream>
#include <sstream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int testcase;
	string input;
	int bule = 0, red = 0;

	cin >> testcase >> input;
	istringstream ss(input);
	string stringBuffer;

	while (getline(ss, stringBuffer, 'B')) {
		if (stringBuffer[0] == 'R') {
			red++;
		}
	}
	istringstream ss2(input);
	while (getline(ss2, stringBuffer, 'R')) {
		if (stringBuffer[0] == 'B') {
			bule++;
		}
	}

	cout << min(bule, red) + 1;
	
	return 0;
}
