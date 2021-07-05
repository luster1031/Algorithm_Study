#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	long long honey[100001] = { 0 };
	long long  total = 0;
	int max_col = 0;
	cin >> n;

	for (int i = 0,num; i < n; i++) {
		cin >> num;
		honey[i] = num;
		total += num;
	}
	//최대 행 번호
	if (honey[0] < honey[n - 1]) {
		max_col = n - 1;
		total -= honey[0];
	}
	else total -= honey[n - 1];

	long long  max_output = 0;
	
	long long  mi_sum = total;
	if (max_col == n - 1) {
		for (int i = 2; i < n; i++) {
			mi_sum -= honey[i];
			max_output = max(max_output, (total - honey[i]) + mi_sum);
		}
	}
	//최대가 젤 앞
	else {
		for (int i = n - 2; i >= 0; i--) {
			mi_sum -= honey[i];
			max_output = max(max_output, (total - honey[i]) + mi_sum);
		}
	}
	cout << max_output;
	return 0;
}
