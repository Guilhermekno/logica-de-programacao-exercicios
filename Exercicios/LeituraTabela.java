package package1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		int escolha;
		float quantidade;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Tabela de produtos:");
		System.out.println("Codigo     Especificação       Preço");
		System.out.println("  1        Cachorro quente     R$4.00");
		System.out.println("  2        X-Salada            R$4.50");
		System.out.println("  3        X-Bacon             R$5.00");
		System.out.println("  4        Torrada simples     R$2.00");
		System.out.println("  5        Refrigerante        R$1.50");
		
		System.out.println("Escolha o código do item: ");
		escolha = sc.nextInt();
		System.out.println("Escolha a quantidade consumida: ");
		quantidade = sc.nextInt();
		
		sc.close();
		
		switch (escolha) {
		case 1 : System.out.printf("Sua escolha foi 'Cachorro quente', quantidade pedida: %.0f, valor da compra: R$ %.2f .", quantidade, quantidade*4,00); break;
		case 2 : System.out.printf("Sua escolha foi 'X-Salada', quantidade pedida: %.0f, valor da compra: R$ %.2f .", quantidade, quantidade*4,50); break;
		case 3 : System.out.printf("Sua escolha foi 'X-Bacon', quantidade pedida: %.0f, valor da compra: R$ %.2f .", quantidade, quantidade*5,00); break;
		case 4 : System.out.printf("Sua escolha foi 'Torrada simples', quantidade pedida: %.0f, valor da compra: R$ %.2f .", quantidade, quantidade*2,00); break;
		case 5 : System.out.printf("Sua escolha foi 'Refrigerante', quantidade pedida: %.0f, valor da compra: R$ %.2f .", quantidade, quantidade*1,50); break;
	
		}
	}
}
