#include<iostream>

using namespace std;

int main() {
	int testcase;
	int num;
	int add = 0;
	int output = -1001;
	cin >> testcase;
	while (testcase--) {
		cin >> num;
		if (add+num >= -1000) {
			add += num;
			if (add > output) {
				output = add;
			}
			if (add <= 0)
				add = 0;
		}
	}
	cout << output;
}


//add
//ouput

//add보다 작으면
	//add = 0
	
//크면
	//add에 넣고
	//넣은값이 output보다 크면
		//output에 넣기