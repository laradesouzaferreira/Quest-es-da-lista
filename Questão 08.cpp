#include <stdio.h>
#include <locale.h>

//Quest�o 08

int fatorial (int valor) {
	int fatorial = 1;
	for (int n = valor; n > 1; n--) {
		fatorial = fatorial * n;
	}

	return fatorial;
}

int main () {
	setlocale (LC_ALL, "Portuguese_Brazil");

	int numero, solucao;

	printf("Digite um n�mero qualquer e obtenha seu fatorial:\n");
	scanf("%d", &numero);

	solucao = fatorial(numero);
	printf("\nO fatorial �: %d", solucao);
}


