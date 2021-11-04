#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N, K;
	int odd_row = 0;
	cin >> N >> K;
	vector<int> even(N+1), odd(N+1);

	for (int i = 0,num, even_start =0,even_row = 0; i < N; i++) {
		cin >> num;
		if (even_start == 0 && num % 2 == 0)even_start = 1;
		if (even_start == 1) {
			if (num % 2 == 0) {
				even[even_row] += 1;
				if(odd[odd_row] > 0)odd_row++;
			}
			else {
				odd[odd_row] += 1;
				if (even[even_row] > 0)even_row++;
			}
		}
	}
	int max_sum = 0;

	for (int i = 0, sum; i <= odd_row; i++) {
		sum = 0;
		for (int j = i, count = 0;  j <= odd_row; j++) {
			count += odd[j];
			if (count <= K)
				sum += even[j];
			else { sum += even[j]; break; }
		}
		max_sum = max(max_sum, sum);
	}
	cout << max_sum;
	return 0;
}
