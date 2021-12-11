import java.io.*;
class Main {
	public static void main(String[] args) throws Exception {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String [] input = br.readLine().split("");
		int start_index = input.length-1;

		while(input[start_index].equals("0")) {
			start_index--;
		}
		
		for(int i = start_index; i>= 0; i--) {
			System.out.print(input[i]);
		}
		
		
	}
}
