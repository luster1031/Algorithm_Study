#include <iostream>
#include <vector>

using namespace std;

int cal(int small, int big) {
	int tmp;
	if (small > big) {
		tmp = big;
		big = small;
		small = tmp;
	}
	while (big% small != 0) {
		tmp = small;
		small = big % small;
		big = tmp;
		
	}
	return small;
}
int main() {
	int testcase;
	int testcase_of_line;
	int num;
	long long int output = 0;
	vector<int> input;

	cin >> testcase;
	while (testcase--) {
		cin >> testcase_of_line;
		while (testcase_of_line--) {
			cin >> num;
			input.push_back(num);
		}

		for (int i = 0; i < input.size(); i++) {
			for (int j = i + 1; j < input.size(); j++) {
				output += cal(input[i], input[j]);
			}
		}
		cout << output <<'\n';
		input.clear();
		output = 0;
	}
	return 0;
}
//�Լ�
	//ū�� ���ؼ�
		//������
			//�������� 0�̸� ���� ��
			//�ƴϸ� �� �������� ������


//testcase
//vector�߰� 
	//for - vectorũ�⸸ŭ
		//i +1 ���� ���� ũ�⸸ŭ

//ū��