
import java.io.*;
class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String[] input1 = br.readLine().split(" ");
        int day = Integer.parseInt(input1[0]);      //  공사 날
        int number = Integer.parseInt(input1[1]);   //  산 갯수
        
		String[] mountain = br.readLine().split(" ");    
        String[] minus;

        int max = -1;
        int min = 100001;

        //  string array to int array
        int [] mountain_int = new int[number];
        for(int i = 0; i<number; i++){
            mountain_int[i] = Integer.parseInt(mountain[i]);
        }
        
        //  min, max and miuns
        for(int i = 0; i<day;i++){
            minus =  br.readLine().split(" ");
            int minus_num = Integer.parseInt(minus[2]);
            for(int index = Integer.parseInt(minus[0])-1; index < Integer.parseInt(minus[1]);index++){
                mountain_int[index]-= minus_num;
               
            }
        }
        for(int i = 0; i<number; i++){
            min = Math.min(min, mountain_int[i]);
            max = Math.max(max, mountain_int[i]);
        }
        System.out.printf("%d\n%d",max, min);

	}
}
