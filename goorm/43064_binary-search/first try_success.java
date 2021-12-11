import java.io.*;
import java.util.*;
class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			String input1 = br.readLine();
			String [] input = br.readLine().split(" ");
			String input2 = br.readLine();

			int index = 0;
			int end = input.length;
			int mid;
			boolean check = false;
					
			while(index < end && index >= 0 && end >= 0){
				mid = (index + end)/2;
				if(Integer.parseInt(input2) == Integer.parseInt(input[mid])){
					System.out.println(mid+1);
					check = true;
					break;
				}else if(Integer.parseInt(input2) > Integer.parseInt(input[mid])){
					index +=1;
				}else{
					end -= 1;
				}
			}
				if(!check)System.out.println("X");
	}
}
