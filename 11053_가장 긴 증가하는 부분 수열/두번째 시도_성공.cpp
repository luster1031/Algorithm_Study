#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	int N,max_count = 0;
	cin >> N;
	vector <int> array_a(N+1), count_array(N+1, 1);
	for (int i = 0, num; i < N; i++) {
		cin >> array_a[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++)
			if (array_a[i] > array_a[j]) count_array[i] = max(count_array[i], count_array[j] + 1);
		max_count = max(count_array[i], max_count);
	}
	
	cout << max_count;
	return 0;
}
