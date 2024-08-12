package package1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int ID, Qtd;
		float Valor, Resultado;
		
		System.out.println("Insira o ID da peça: ");
		ID = sc.nextInt();
		
		System.out.println("Insira a Qtdade de peças: ");
		Qtd = sc.nextInt();
		
		System.out.println("Insira o valor da peça: ");
		Valor = sc.nextFloat();	
		
		sc.close();

		Resultado = Qtd*Valor;
		
		System.out.printf("%nID da peça: %d / Quantidade comprada: %d", ID, Qtd);
		System.out.printf("%nTotal da compra: R$%.2f", Resultado);
		
	}

}
