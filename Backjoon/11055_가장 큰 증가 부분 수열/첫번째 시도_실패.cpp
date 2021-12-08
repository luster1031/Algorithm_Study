#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	int N, output_max_num = 0;
    cin >> N;
	vector<int> input_A(N + 1), add_array(N+1,0);
    
	for (int i = 0; i < N; i++)
		cin >> input_A[i];

	for (int i = 0, max_row, max_add_num; i < N; i++) {
		max_row = 0;
		max_add_num = 0;
		for (int j = 0; j < i; j++) {
			if (input_A[i] > input_A[j]) {
				if (max_row < input_A[j]) {
					max_row = input_A[j];
					max_add_num = add_array[j];
				}}}
		add_array[i] = input_A[i] + max_add_num;
		output_max_num = max(output_max_num, add_array[i]);
	}
	cout << output_max_num;

	return 0;
}
