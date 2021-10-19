#include<iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



vector<string> cal(vector<string> output, const char* in) {
	while(true){
		auto it = find(output.begin(), output.end(), in);
		if (it != output.end()) {
			int index = it - output.begin();
			int sum = stoi(output[index-1]);
			if (in == "*")
				sum *= stoi(output[index +1]);
			else if(in == "-")
				sum -= stoi(output[index + 1]);
			else
				sum += stoi(output[index + 1]);
			output.erase(output.begin() + index+1);
			output.erase(output.begin() + (index));
			output[index - 1] = to_string(sum);
		}
		else
			break;
	}
	return output;
}
long long mul(vector<string> input) {
	long long max_num = 0;
	input = cal(input, "*");
	vector<string> output(input);
	output = cal(cal(input, "-"), "+");
	max_num = stoll(output[0]);

	output = cal(cal(input, "+"), "-");
	if (max_num < 0) max_num *= -1;
	max_num = max(stoll(output[0]), max_num);
	return max_num;
}

long long sub(vector<string> input) {
	long long max_num = 0;
	input = cal(input, "-");
	vector<string> output(input);
	output = cal(cal(input, "*"), "+");
	max_num = stoll(output[0]);

	output = cal(cal(input, "+"), "*");
	if (max_num < 0) max_num *= -1;
	max_num = max(stoll(output[0]), max_num);
	return max_num;
}

long long add(vector<string> input) {
	long long max_num = 0;
	input = cal(input, "+");
	vector<string> output(input);
	output = cal(cal(input, "*"), "-");
	max_num = stoll(output[0]);

	output = cal(cal(input, "-"), "*");
	if (max_num < 0) max_num *= -1;
	max_num = max(stoll(output[0]), max_num);
	return max_num;
}

long long solution(string expression) {
	long long answer = 0;
	
	vector<string> input;
	string a;
	for (int i = 0; i <= expression.size(); i++) {
		if (expression[i] >= '0' && expression[i] <= '9') {
			a += expression[i];
		}
		else {
			input.push_back(a);
			input.push_back(a = expression[i]);
			a = "";
		}
	}

	answer = max(mul(input), sub(input));
	answer= max(answer, add(input));
	return answer;
}
