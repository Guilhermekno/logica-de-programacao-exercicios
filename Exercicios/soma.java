package package1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		int number1,number2;
		int sum;
		
		Scanner sc = new Scanner(System.in);
		
		number1 = sc.nextInt();
		number2 = sc.nextInt();
		
		sc.close();
		
		sum = number1+number2;
		System.out.println("Resultado:" + sum );
		
	}

}
