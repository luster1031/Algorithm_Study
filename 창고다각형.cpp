#include<stdio.h>

int main() {
	int N;//기둥개수, 높이
	int store[1001][2] = { 0 };//[위치][높이]
	int max_location = 0, min = 0;
	int max_high = 0;
	

	int left_min = 0;
	int left_max = -1;
	int left_min_location = 501;
	int left_max_high = 0;
	int left_max_location = 0;

	int right_count = 0;
	int right_max_location = 0;
	int right_max_high = 0;
	int right_min = 0;
	int right_max = -1;
	int right_min_location = 0;

	int left_count = 0;
	
	int right[501] = { 0 };
	int left[501] = { 0 };

	//넓이
	int area = 0;

	//기둥개수
	scanf("%d", &N);
	
	//정수 받기
	for (int i = 0; i < N; i++) {
		scanf("%d %d",&store[i][0], &store[i][1]);
		//최대값 구하기
		if (max_high < store[i][1]) {
			max_location = store[i][0]; //최대위치
			max_high = store[i][1];//최대 높이
		}
	
	}

	for (int i = 0; i < N; i++) {
		if (max_location < store[i][0]) {
			right[right_count++] = i;	//큰 위치의 행 번호 넣기
			if (right_min_location < store[i][0]) {
				right_min_location = store[i][0];
			}
		}
		else if (max_location > store[i][0]) {
			left[left_count++] = i;		//작은 위치의 행 넣기
			if (left_min_location > store[i][0]) {
				left_min_location = store[i][0];
			}
				
			
		}
	}

	//최댓값이 left_min이 되도록 계속
		//left_count-- 만큼 돌면서 최댓값 구하기
		//다 돌면, 최댓값의 높이 * (이전꺼 - 위치)
	
	int befor_loc = max_location;

	while (left_max_location != left_min_location) {
		for (int i = 0; i < left_count; i++) {
			if (left_max_high <= store[left[i]][1] && store[left[i]][0] < befor_loc ) {
				left_max_high = store[left[i]][1];
				left_max = left[i];//left_max 높이 행 값 넣기
				left_max_location = store[left[i]][0];
			}
		}
		area += store[left_max][1] * (befor_loc - store[left_max][0]);
		befor_loc = store[left_max][0];
		left_max_high = 0;
	}

	right_max_high = 0;
	befor_loc = max_location;
	area += max_high;
	while (right_max_location != right_min_location) {
		for (int i = 0; i < right_count; i++) {
			if (right_max_high < store[right[i]][1] && store[right[i]][0] > befor_loc) {
				right_max_high = store[right[i]][1];
				right_max = right[i];
				right_max_location = store[right[i]][0];
			}
		}
		area += store[right_max][1] * (store[right_max][0] - befor_loc);
		befor_loc = store[right_max][0];
		right_max_high = 0;
	}

	printf("%d", area);
	return 0;
}

//max에 젤 큰거 N스캔
	//큰거 중 작은거 min
		//

	//큰거 중 큰거 big