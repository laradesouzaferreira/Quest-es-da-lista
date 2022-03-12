#include <stdio.h>
#include <locale.h>

// Questão 01

int somar(int N);

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");

	int valor, soma;

	printf("Insira um número:");
	scanf("%d", &valor);

	soma = somar(valor);

	printf("\nA soma é: %d", soma);
}

int somar (int N) {
	int soma = 0;

	for(int a = 1; a <= N; a++) {

		soma = soma + a;
	}

	return soma;
}
