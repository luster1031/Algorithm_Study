#include <iostream>
#include <string>
using namespace std;
int main() {
	string input_str;
	cin >> input_str;
	string output;
	int count = 0;
	for (int i = 0; i < input_str.size()+1; i++) {
		if (input_str[i] == '.' || input_str[i] == '\0') {
			if (count % 2 != 0) {
				cout << "-1";
				return 0;
			}
			while (count / 4 != 0) {
				output+= "AAAA";
				count -= 4;
			}
			while (count / 2 != 0) {
				output += "BB";
				count -= 2;
			}
			if (i != input_str.size()) {
				output+=".";
				count = 0;
			}
		}
		else {
			count++;
		}

	}
	
	for (int i = 0; i < output.size(); i++) {
		cout << output[i];
	}
	
	return 0;
}
