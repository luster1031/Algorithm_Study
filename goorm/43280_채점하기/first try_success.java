import java.io.*;
class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String input = br.readLine();
		int sum =0;
		
		for(int i = 0,score = 1; i<input.length(); i++) {
			if(input.charAt(i) == 'o') {
				if(score == 0)score = 1;
				sum += score;
				score++;
			}else {
				score = 0;
			}
		}
		System.out.println(sum);
	}
}
