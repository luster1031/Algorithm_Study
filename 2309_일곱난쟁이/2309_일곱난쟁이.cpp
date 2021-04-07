#include<iostream>
#include<algorithm>

using namespace std;
bool output_check = false;
bool input_check[9];
int input[9];
int check(int count, int sum,int row) {
	if (sum >= 100) {
		if (count == 7 && sum == 100) {
			for (int i = 0; i < 9; i++) {
				if (input_check[i])
					cout << input[i] << '\n';
			}
			output_check = true;
		}
		return 0;
	}
	else {
		for (row+=1; row < 9; row++) {
			if (!output_check) {
				input_check[row] = true;
				check(count + 1, sum + input[row], row);
				input_check[row] = false;
			}
		}
	}
	return 0;
}
int main() {


	for (int i = 0; i < 9; i++) {
		cin >> input[i];
	}
	sort(input, input + 9);
	for (int i = 0; i < 9; i++) {
		if (!output_check) {
			input_check[i] = true;
			check(1, input[i],i);
			input_check[i] = false;
		}
	}
	

}