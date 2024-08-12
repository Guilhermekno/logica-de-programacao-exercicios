package package1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int identificacao, horas;
		float salario, resultado;
		
		System.out.println("Insira o Funcionario ID: ");
		identificacao = sc.nextInt();
		
		System.out.println("Quantidade de horas trabalhadas: ");
		horas = sc.nextInt();
		
		System.out.println("R$ por hora trabalhada");
		salario = sc.nextFloat();
		
		sc.close();
		
		resultado = salario*horas;
		
		System.out.printf("ID: %d", identificacao);
		System.out.printf("%nSalario: R$%.2f", resultado);
		
	}

}
