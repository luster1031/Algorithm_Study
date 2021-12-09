import java.io.*;
import java.util.Arrays;
class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
			String input = br.readLine();
			
			int A = input.charAt(0) - '0';
			int B = input.charAt(2) - '0';
			int j = 0;
				
			String [] input1 = br.readLine().split(" ");
			String [] input2 = br.readLine().split(" ");
			
			int[] output = new int[A+B] ;
			 for (int i = 0; i < input1.length; i++) {
				 output[i] = Integer.parseInt(input1[i]);
		    }
			 for(int i = 0; i<input2.length; i++) {
				 output[input1.length+i] = Integer.parseInt(input2[i]);
			 }
			Arrays.sort(output,0,A+B);
			for(int i = 0; i<output.length; i++)
				System.out.printf("%s ", output[i]);
	}
}
