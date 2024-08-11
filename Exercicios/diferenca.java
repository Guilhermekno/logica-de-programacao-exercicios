package package1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int valor1,valor2,valor3,valor4,diferenca;
		
		System.out.println("Informe o valor a (a*b): ");
		valor1 = sc.nextInt();
		
		System.out.println("Informe o valor b (a*b): ");
		valor2 = sc.nextInt();
		
		System.out.println("Informe o valor c (c*d): ");
		valor3 = sc.nextInt();
		
		System.out.println("Informe o valor d (c*d): ");
		valor4 = sc.nextInt();
		
		
		diferenca = (valor1*valor2)-(valor3*valor4);
		
		sc.close();

		System.out.println("A diferenca (a*b)-(c*d) eh: " + diferenca);
	}

}
