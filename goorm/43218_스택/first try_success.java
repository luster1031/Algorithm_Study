import java.io.*;
import java.util.Scanner;
class Main {
	private static int MAX_SIZE = 10;
	public static void main(String[] args) {
		int [] stack = new int[MAX_SIZE];
		int top = -1;
		boolean check = true;
		
		Scanner scanner = new Scanner(System.in);
		int number = scanner.nextInt();
		int what_kind = 0;
		int push_num = 0;
		for(int i = 0; i< number && check; i++){
			what_kind = scanner.nextInt();
			switch(what_kind) {
			case 0:
				push_num = scanner.nextInt();
				if(full(top)) {
					stack[++top] = push_num;
				}else System.out.println("overflow");
				break;
			case 1:
				if(isEmpty(top)) {
					top--;
				}else System.out.println("underflow");
				break;
			default :
				check = false;
				break;
			}
		}
		for(int i = 0; i<=top; i++) {
			System.out.printf("%d ",stack[i]);
		}
	}
	public static boolean full(int top) {
		if(top == MAX_SIZE-1)return false;
		return true;
	}
	public static boolean isEmpty(int top) {
		if(top == -1)return false;
		return true;
	}
}
