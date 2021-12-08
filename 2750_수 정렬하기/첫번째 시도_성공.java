package backjoon;

import java.util.*;
//버블 정렬
public class Main{
	public static void main(String args[]){
		Scanner scanner = new Scanner(System.in);
		int N= scanner.nextInt();
		int array[] = new int[N];
		for(int i = 0; i<N; i++)
			array[i]= scanner.nextInt();
		
		for(int i = 0; i<N-1; i++) {
			for(int row = 0, tem = 0; row <N-1-i; row++) {
				if(array[row] > array[row+1]) {
					tem = array[row];
					array[row] = array[row+1];
					array[row+1] = tem;
				}
			}
		}
		for(int i = 0; i<N; i++)
			System.out.println(array[i]);
	}
}
