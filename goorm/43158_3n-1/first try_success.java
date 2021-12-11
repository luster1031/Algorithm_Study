import java.io.*;
class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String[] input = br.readLine().split(" ");
		
		int start = Integer.parseInt(input[0]);
		int end = Integer.parseInt(input[1]);
		int max_count = 0;
		
		for(;start<=end;start++) {
			max_count = Math.max(max_count, cal(start));
		}
		System.out.println(max_count+1);
	}
	public static int cal(int number) {
		int count = 0;
		while(number!=1) {
			if(number%2 == 0) {
				number/=2;
			}else {
				number = (number * 3)+1;
			}
			count++;
		}
		return count;
	}
}
