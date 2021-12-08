#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main() {
	string input_str;
	cin >> input_str;
	istringstream ss(input_str);
	string stringBuffer;
	cout << stringBuffer;
	vector<string> x;
	while (getline(ss, stringBuffer, '.')) {
		if (stringBuffer.size() % 2 != 0) {
			cout << "-1";
			return 0;
		}
		if (!stringBuffer.empty()) {
			x.push_back(stringBuffer);
		}
		else {
			x.push_back(".");
		}
		x.push_back(".");
	}
	for (int i = 0; i < x.size()-1; i++) {
		if (!x[i].compare("."))
			cout << ".";
		else{
			int size_num = x[i].size();
			while (size_num / 4 != 0) {
				cout << "AAAA";
				size_num %= 4;
			}
			while (size_num / 2 != 0) {
				cout << "BB";
				size_num %= 2;
			}
		}
		
	}
	
	
	
	return 0;
}
