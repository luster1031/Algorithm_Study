import java.io.*;
class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String input = br.readLine();
		int A = input.charAt(0) - '0';
		
		String[] input2 =br.readLine().split(" ");
		String[] input3 = br.readLine().split(" ");
		
		int sum = 0;
		for (int i =Integer.parseInt(input3[0])-1; i <= Integer.parseInt(input3[1])-1; i++) {
			  sum += Integer.parseInt(input2[i]);
		}
		System.out.println(sum);
	}
}
