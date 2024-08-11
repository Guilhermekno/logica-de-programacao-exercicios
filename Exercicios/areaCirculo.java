package package1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Double raio, pi = 3.14159, resultado;

		Scanner sc = new Scanner(System.in);
		System.out.println("Informe o valor do raio do circulo: ");
		raio = sc.nextDouble();

		resultado = Math.pow(raio,2)*pi;
		
		sc.close();
		
	
		System.out.printf("Area do circulo: %.4f%n", resultado);

	}

}
