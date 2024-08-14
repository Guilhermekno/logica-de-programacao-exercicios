package package1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		int numero = 0;
		String resultado;
		
		Scanner sc = new Scanner (System.in);
		
		do {
			
			System.out.println("Insira um número diferente de 0. : ");
			numero = sc.nextInt();
			
		} while (numero == 0);
		
		resultado = (numero % 2 == 0) ? "Numero par" : "Numero ímpar";
		
		sc.close();
		
		System.out.printf("'%d' --> %s", numero, resultado);
	}	

}

