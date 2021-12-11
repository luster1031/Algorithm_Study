import java.io.*;
import java.lang.*;
import java.util.*;


public class Main {
	public static final Scanner scanner = new Scanner(System.in);
	
	public static void testCase(int caseIndex) {
		int N = scanner.nextInt();  // 지도의 크기 
		int K = scanner.nextInt();  // 놀이공원의 크기
		int answer = 10001;
		int[][] wastes = new int[N][N]; // 각 칸의 쓰레기 존재 여부 
		for (int r = 0; r < N; r += 1) {
			for (int c = 0; c < N; c += 1) {
				wastes[r][c] = scanner.nextInt();
			}
		}
		
		for(int i = 0 ; i<=N-K; i++) {
			for(int j = 0; j<=N-K;j++) {
				answer = Math.min(check(i,j, K,wastes),answer);
			}
		}
		
		System.out.println(answer);
	}
	public static int check(int row, int col,int k,int[][] wastes) {
		int count = 0;
		for(int i = row; i < row+k; i++) {
			for(int j = col ; j < col+k ; j++) {
				if(wastes[i][j] == 1) {
					count++;
				}
			}
		}
		return count;
	}
	public static void main(String[] args) throws Exception {
		int caseSize = scanner.nextInt();
		
		for (int caseIndex = 1; caseIndex <= caseSize; caseIndex += 1) {
			testCase(caseIndex);
		}
	}
	
	
}
