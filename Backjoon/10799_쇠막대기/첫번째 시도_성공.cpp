#include<stdio.h>

int main() {
	int	stack[100001];
	int raser[100001];
	char input;
	int input_count = -1;
	int stack_top = -1;
	int raser_top = -1;
	int piece = 0;
	int sum = 0;
	while (1) {
		scanf("%c", &input);
		input_count++;
		if (input == '\n') {
			break;
		}
		
		if (input == '(') {
			stack[++stack_top] = input_count;
		}
		else {
			if (input_count - stack[stack_top] == 1) {
				raser[++raser_top] = input_count;
			}
			else if (input_count - stack[stack_top] > 1) {
				for (int i = 0; i <= raser_top; i++) {
					if (stack[stack_top] < raser[i]) {
						while (raser[i] <= input_count && i <= raser_top) {
							piece++;
							i++;
						}
						break;
					}
				}
				sum += (piece+1);
				piece = 0;
			}
			stack_top--;
		}
		
	}
	printf("%d", sum);
	return 0;
}
