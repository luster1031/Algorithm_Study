import java.io.*;
class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			
			String input = br.readLine();
			int num = Integer.parseInt(input);
			int [] number = new int[31];
			int sum = 0;
			number[0] = 0;
			number[1] = 1;
			
			for(int i = 2; i<=num;i++) {
				number[i] = number[i-1] + number[i-2];
				sum += number[i];
			}
			System.out.println(sum+1);
	}
}
