package goorm;

import java.io.*;
import java.util.Scanner;

public class algorithm {
	private static int max_num = 0;
		public static void main(String[] args) throws Exception {
			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			String input = br.readLine();
			int input_number = Integer.parseInt(input);
			for(; input_number>0; input_number--) {
				cal(input_number);
			}
			System.out.println(max_num);
		}
		public static void cal(int num){
			String number = Integer.toString(num);
			int mul_num = 1;
			for(int i = 0; i<number.length(); i++) {
				mul_num *= number.charAt(i)-'0';
			}
			max_num = Math.max(max_num, mul_num);
		}
}
