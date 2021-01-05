#include <stdio.h>

int main() {
	int N;
	int num[1001] = { 0 };
	int sum = 0, count= 0;
	int i;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}

	for (count = 1; count < N; count++) {
		sum = num[count];
		for (i = count; i > 0; i--) {
			if (sum < num[i-1]) {
				num[i] = num[i-1];
			}
			else {
				break;
			}
		}
		num[i] = sum;
		i = 0;
	}
	
	for (int i = 0; i < N; i++) {
		printf("%d\n", num[i]);
	}

	return 0;
}