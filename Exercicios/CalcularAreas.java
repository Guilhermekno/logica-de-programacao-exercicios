package package1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		System.out.println("Use ',' ao invés de '.'.");
		
		Scanner sc = new Scanner(System.in);
		
		Double A,B,C;
		Double Pi = 3.14159;
		Double STriangulo,SCirculo,STrapezio,SQuadrado,SRetangulo;
		
		System.out.println("Informe as medidas da Base 'A': ");
		A = sc.nextDouble();
		System.out.println("Informe as medidas do Lado 'B': ");
		B = sc.nextDouble();
		System.out.println("Informe as medidas da Altura 'C': ");
		C = sc.nextDouble();
		
		sc.close();
		
		STriangulo = (A*C)/2;
		SCirculo = (Pi*Math.pow(C, 2));
		STrapezio = ((A+B)*C)/2;
		SQuadrado = B*B;
		SRetangulo = A*B;
		
		System.out.printf("%nDados: A (%.2f), B(%.2f), C(%.2f), Pi(%.2f).", A,B,C,Pi);
		System.out.printf("%nArea do Triangulo Lado 'A' e Altura 'C': %.2f", STriangulo);
		System.out.printf("%nArea do Circulo de raio Raio 'C': %.2f", SCirculo);
		System.out.printf("%nArea do Trapezio Lado 'A','B' e Altura 'C': %.2f", STrapezio);
		System.out.printf("%nArea do Quadrado Lado 'B': %.2f", SQuadrado);
		System.out.printf("%nArea do Retangulo Lado 'A' e 'B': %.2f", SRetangulo);
		
	}

}

