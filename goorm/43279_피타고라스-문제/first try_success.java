package goorm;


public class algorithm {
	public static void main(String[] args) throws Exception {

		for (int a = 1; a <= 1000; a++) {
			for (int b = 1; b <= 1000 - a; b++) {
				for (int c = 1; c <= 1000 - a - b; c++) {
					if (a + b + c == 1000 && (Math.pow(a, 2) + Math.pow(b, 2) == Math.pow(c, 2))) {
						System.out.println(a * b * c);
						return;
					}
				}
			}
		}

	}
}
