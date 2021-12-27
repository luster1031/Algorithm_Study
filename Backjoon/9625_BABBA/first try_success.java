
import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int input = scanner.nextInt();
		int [] A = new int[46];
		int [] B = new int[46];
		B[1] = 1;
		A[2] = 1;
		B[2] = 1;
		
		for(int i = 3; i<=input; i++) {
			A[i] = A[i-1] + A[i-2];
			B[i] = B[i-1] + B[i-2];
		}
		
		System.out.println(A[input] + " "+ B[input]);
	}
}
