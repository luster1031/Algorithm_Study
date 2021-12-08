#include<iostream>
#include<queue>

using namespace std;
int main() {
	int N;
	cin >> N;
	for (int i = 1,count = 1;i >= 0 && count <= N*2;count++) {
		for (int j = 1; j <= N * 2; j++) {
			if (j <= i || j > (N*2) - i)
				cout << "*";
			else cout << " ";
		}
		cout << "\n";
		if (count < N)i++;
		else i--;
	}
	return 0;
}
