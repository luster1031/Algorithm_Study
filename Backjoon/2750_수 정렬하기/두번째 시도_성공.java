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
		
		for(int i = 1,j; i<N;i++) {
			int compare_num = array[i];
			for(j = i-1; j>=0 && array[j]>compare_num; j--)
				array[j+1] = array[j];
			array[j+1] = compare_num;
			}
		for(int i = 0; i<N; i++)
			System.out.println(array[i]);
	}
}
