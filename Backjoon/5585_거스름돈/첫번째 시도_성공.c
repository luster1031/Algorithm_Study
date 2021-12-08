#include <iostream>

using namespace std;
int main() {
	int input,output = 0;
	int coin[6] = { 500,100,50,10,5,1 };
	cin >> input;
	input = 1000 - input;
	for (int i = 0; i < 6; i++) {
		while (input / coin[i] != 0) {
			output += input / coin[i];
			input %= coin[i];
		}
	}
	cout << output;
	return 0;
}
