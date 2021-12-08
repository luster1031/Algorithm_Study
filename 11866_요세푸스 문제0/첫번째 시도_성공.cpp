#include<iostream>
#include<vector>
using namespace std;
int main() {
	int N, K;
	vector<int> array_cal;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		array_cal.push_back(i);
	int row = K-1;
	cout << "<";
	while (array_cal.size() != 1) {
		cout << array_cal[row] <<", ";
		array_cal.erase(array_cal.begin()+row);
		row = (row + K-1)%array_cal.size();
	}
	cout << array_cal[0] << ">";
	return 0;
}
