package goorm;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class algorithm {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String input = br.readLine();
		float a = input.charAt(0) - '0';
		float b = input.charAt(2) - '0';
		
		input = br.readLine();
		String operator_input = br.readLine();
		if(operator_input.equals("+")) {
			a += input.charAt(0)-'0';
			b += input.charAt(2) - '0';
		}
		else {
			a -= input.charAt(0)-'0';
			b -= input.charAt(2) - '0';
		}
		System.out.printf("%.2f %.2f",a,b);
	}
}
