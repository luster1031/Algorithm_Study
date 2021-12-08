#include <iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int N;
int min_add = 999999999;
int cal(int count, int input_array[][21], bool cases[], int row) {
	if (count == N / 2) {
		int team_start = 0 ;
		int team_link = 0;
		//각자 팀의 합구하기
		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N; j++) {
				if (cases[i] && cases[j]) {
					team_start += input_array[i][j];
					team_start += input_array[j][i];
				}
				else if (!cases[i] && !cases[j]) {
					team_link += input_array[i][j];
					team_link += input_array[j][i];
				}
			}
		}
		//차이의 최솟값 구하기
		min_add = min(min_add, abs(team_link-team_start));
		return 0;
	}
	for(int i= row+1; i<N; i++){
		cases[i] = true;
		cal(count + 1, input_array, cases, i);
		cases[i] = false;
	}
	return 0;
}
int main() {
	int input_array[21][21];
	bool Number_of_cases[21];
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> input_array[i][j];
		}
	}

	//경우의 수 구해야지, 
	for (int i = 0; i < N; i++) {
		//함수 들어가자
		Number_of_cases[i] = true;
		cal(1, input_array, Number_of_cases,i);
		Number_of_cases[i] = false;
	}
	cout << min_add;
	return 0;
}
