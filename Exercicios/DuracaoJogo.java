package package1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		int horarioInicial, horarioFinal, tempo;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Duração mínima de jogo de 1 hora e máximo de 24 horas.");
		System.out.printf("Exemplo de uso: 4:35 p.m. deve ser 16 'h' e não 16.35 'h'. %n%n");
		System.out.println("A que horas o jogo começa? em 'h': ");
		horarioInicial = sc.nextInt();
		System.out.println("A que horas o jogo termina? em 'h': ");
		horarioFinal = sc.nextInt();
		
		sc.close();
		
		if (horarioInicial<horarioFinal) {
			tempo = horarioFinal-horarioInicial;
			if (tempo < 1 || tempo > 24) {
				System.out.println("O tempo de jogo é menor que 1h ou maior que 24h.");
			}
			else System.out.println("O tempo de jogo é de: " + tempo + " horas.");
		}
		else {
			tempo = (24-horarioInicial)+horarioFinal;
			if (tempo < 1 || tempo > 24) {
				System.out.println("O tempo de jogo é menor que 1h ou maior que 24h.");
			}
			else System.out.println("O tempo de jogo é de: " + tempo + " horas.");
		}
		
	}
}
