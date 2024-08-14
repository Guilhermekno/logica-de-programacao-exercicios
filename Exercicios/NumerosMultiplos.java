package package1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		int numero1 = 0, numero2 = 0;

		Scanner sc = new Scanner(System.in);
		do {
			
			System.out.println("Numeros multiplos? Escolha 2 números diferentes de 0. : ");

			System.out.println("Insira o primeiro numero: ");
			numero1 = sc.nextInt();

			System.out.println("Insira o segundo numero: ");
			numero2 = sc.nextInt();

		} while (numero1 == 0 || numero2 == 0);
		
		sc.close();
		
		if (numero1 % numero2 == 0 || numero2 % numero1 == 0)
			System.out.printf("Os números '%d' e '%d' são multiplos!",numero1, numero2);
		else
			System.out.printf("Os números '%d' e '%d' não são multiplos!",numero1, numero2);
	}
}
