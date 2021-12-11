import java.io.*;
class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			
			String [] input = br.readLine().split(" ");
			int start = Integer.parseInt(input[0]);
			int end = Integer.parseInt(input[1]);
			Boolean[] check = new Boolean[10001];
			for(int i= 1; i<=100; i++) {
				check[i*i] = true;
			}
			int sum = 0;
			int min = 0;
			
			for(;start <= end ; start++) {
				if(check[start]!= null) {
					if (min == 0)min = start;
					sum += start;
				}
			}
			System.out.printf("%d %d", min, sum);
	}
}
