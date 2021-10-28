#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	for (int i = 1,count = 1;count < N*2;count++) {
		for (int j = 1; j <= (N*2)-i; j++) {
			if (j <i)
				cout << " ";
			else cout << "*";
		}
		if (count < N)i++;
		else i--;
		if (i > 0) cout << "\n";
	}
	return 0;
}