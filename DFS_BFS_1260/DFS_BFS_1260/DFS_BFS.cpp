#include<stdio.h>
#define MAX 1001

int matrix[MAX][MAX] = { 0 };

int flag[MAX] = { 0 };
int DFS[MAX] = { 0 };
int rear = -1;
int fromt = -1;

int main() {
	int number, frist, second;
	int count = 1, col_count = 0;
	int N, M;

	scanf_s("%d %d %d", &N, &M, &number);
	
	for (; M > 0; M--) {
		scanf_s("%d %d", &frist, &second);
		matrix[frist][second] = 1;
		matrix[second][frist] = 1;
	}

	flag[number] = count;
	printf("%d ", number);
	for (int i = number,system_count = 0; count != N && system_count <= N;system_count++) {
		col_count = 0;
		for (int j = 1; j <= N; j++) {
			if (matrix[i][j] == 1 && flag[j] == 0) {
				printf("%d ", j);
				flag[j] = ++count;
				col_count++;
				i = j;
				j = N;
				//dfs(i, matrix, flag,N);
			}
		}
		if (col_count == 0) {
			for (int k = 0; k < N; k++) {
				if (flag[k] == count)
					i = count;
			}
		}
	}

	printf("\n");
	//BFS - 너비우선
	//초기화
	count = 1;
	for (int i = 1 ; i<MAX; i++) {
		flag[i] = 0;
	}

	DFS[count] = number;
	flag[number] = count;
	
		col_count = 1;
		for (int k = count - col_count + 1; k <= count; k++) {
			for (int j = 1; j <= N; j++) {
				if (matrix[DFS[k]][j] == 1 && flag[j] == 0) {
					DFS[++count] = j;
					flag[j] = count;
					col_count++;
				}
			}
		}
	
		for (int i = 1; DFS[i] != 0; i++) {
			printf("%d ", DFS[i]);
		}
	



	return 0;
}


