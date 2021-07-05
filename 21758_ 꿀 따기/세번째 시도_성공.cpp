#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	long long honey[100001] = { 0 };
	long long  total = 0;
	long long max_output = 0;
	int max_col = 0;
	cin >> n;

	for (int i = 0,num; i < n; i++) {
		cin >> num;
		honey[i] = num;
		total += num;
	}
	//끝에 두개 
	max_output = max(max_output, (total- honey[0] - honey[1])*2);
	max_output = max(max_output, (total - honey[n-1] - honey[n-2]) * 2);

	//끝에 벌이 있고 떠돔
	//벌 - 0에 있음
	int sum = total - honey[0] - honey[1];
	for (int i = 2; i < n - 1; i++) {
		sum -= honey[i];
		max_output = max(max_output, (total - honey[0] - honey[i]) + sum);
	}

	//벌 - 끝에
	sum = total - honey[n-1] - honey[n-2];
	for (int i = n-3; i >= 0; i--) {
		sum -= honey[i];
		max_output = max(max_output, (total - honey[n-1] - honey[i]) + sum);
	}

	//벌 중간
	sum = total - honey[0] - honey[n - 1];
	for (int i = 1; i < n - 1; i++) {
		max_output = max(max_output, sum + honey[i]);
	}
	cout << max_output;
	return 0;
}
