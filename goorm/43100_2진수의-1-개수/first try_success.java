package goorm;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class algorithm {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String input = br.readLine();
		int input_number = Integer.parseInt(input);
		int count = 1;
		while(input_number != 1) {
			if(input_number %2 == 1)count++;
			input_number /= 2;
		}
		System.out.println(count);
	}
}
