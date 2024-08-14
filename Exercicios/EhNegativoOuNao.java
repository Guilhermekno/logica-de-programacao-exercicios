package package1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		String resultado;
		int numero = 0;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite um número, e direi se é positivo ou negativo: ");
		numero = sc.nextInt();
		
		sc.close();
		
		resultado = (numero > 0)? "O número informado é positivo." :
					(numero == 0) ? "O número informado é 0." :
					"O número informado é negativo";
		
		System.out.printf("'%d' %s", numero, resultado);
	}

}

