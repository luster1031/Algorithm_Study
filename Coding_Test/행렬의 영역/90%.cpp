#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;
bool check[12][12];
int DFS(int **matrix, int sizeOfMatrix, int row, int col, int count){
	//가로
	if(row+1<sizeOfMatrix || col+1 <sizeOfMatrix){
		if(col+1 <sizeOfMatrix && matrix[row][col+1] >0 && !check[row][col+1]){ 
			check[row][col+1] = true;
			count = DFS(matrix, sizeOfMatrix, row, col+1, count+1);
		}
		if(row+1 < sizeOfMatrix && matrix[row+1][col]>0 && !check[row+1][col]){
			check[row+1][col] = true;
			count = DFS(matrix, sizeOfMatrix, row+1, col, count+1);
		}
		if(col -1>=0 && matrix[row][col-1] > 0 && !check[row][col-1]){
			check[row][col-1] = true;
			count = DFS(matrix, sizeOfMatrix, row, col-1, count+1);
		}
		if(row-1 >=0 && matrix[row-1][col]>0 && !check[row-1][col]){
			check[row-1][col] = true;
			count = DFS(matrix, sizeOfMatrix, row-1, col, count+1);
		}
	}
	return count;
}

void solution(int sizeOfMatrix, int **matrix) {
	int output_count = 0;
	vector<int> output_vec;
	for(int i = 0; i<sizeOfMatrix; i++){
		for(int j = 0; j<sizeOfMatrix; j++){
			if(matrix[i][j] >0 && !check[i][j]){
				output_count ++;
				check[i][j] = true;
				output_vec.push_back(DFS(matrix, sizeOfMatrix,i,j,1));
				
			}
		}
	}
	
	cout << output_count <<"\n";
	int size = output_vec.size();
	if(size > 0){
		sort(output_vec.begin(), output_vec.end());
		for(int i = 0; i<size; i++){
			cout << output_vec[i];
			if(i < size-1)
				cout << " ";
		}
		cout <<"\n";
	}
}

struct input_data {
  int sizeOfMatrix;
  int **matrix;
};

void process_stdin(struct input_data& inputData) {
  string line;
  istringstream iss;

  getline(cin, line);
  iss.str(line);
  iss >> inputData.sizeOfMatrix;

  inputData.matrix = new int*[inputData.sizeOfMatrix];
  for (int i = 0; i < inputData.sizeOfMatrix; i++) {
    getline(cin, line);
    iss.clear();
    iss.str(line);
    inputData.matrix[i] = new int[inputData.sizeOfMatrix];
    for (int j = 0; j < inputData.sizeOfMatrix; j++) {
      iss >> inputData.matrix[i][j];
    }
  }
}

int main() {
  struct input_data inputData;
  process_stdin(inputData);

  solution(inputData.sizeOfMatrix, inputData.matrix);
  return 0;
}
