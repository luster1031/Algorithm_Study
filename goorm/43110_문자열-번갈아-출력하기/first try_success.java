import java.io.*;
class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String input = br.readLine();
		int max_length = input.length();
		for(int i = 0; i<max_length/2;i++){
			System.out.print(input.charAt(i));
			System.out.print(input.charAt(max_length-i-1));
		}
		
			if(input.length() % 2 != 0){
			System.out.print(input.charAt(max_length/2));
		}
	}
}
