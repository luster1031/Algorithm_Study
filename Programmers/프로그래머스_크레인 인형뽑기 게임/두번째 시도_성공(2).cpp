#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	int i = 0, j = 0;
	stack<int> input;
	int befor_num = 0;
	for (i = 0; i < moves.size(); i++) {
		for (j = 0; j < board[0].size() && board[j].at(moves[i] - 1) == 0; j++) {}
		if (j == board[0].size())continue;

		if(!input.empty() && input.top() == board[j].at(moves[i] - 1)) {
				answer += 2;
				input.pop();
		}
		else 
			input.push(board[j].at(moves[i] - 1));
		board[j].at(moves[i] - 1) = 0;

	}
	return answer;
}
int main() {
	vector<vector<int>> input = { {0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1} };
	vector<int> moves = { 1,5,3,5,1,2,1,4 };
	cout << solution(input,moves);

	return 0;
}
