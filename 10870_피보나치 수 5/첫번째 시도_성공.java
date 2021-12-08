package backjoon;

import java.util.*;

public class Main{
	public static int cal(int num) {
		if(num == 0)return 0;
		if(num == 1)return 1;
		return cal(num-1) + cal(num-2);
	}
	
	public static void main(String args[]){
		Scanner scanner = new Scanner(System.in);
		int number= scanner.nextInt();
		System.out.println(cal(number));
	}
}
