#include <stdio.h>
#include <locale.h>

//Questão 09

int Soma_Divisores (int n);

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");

	int numero, resultado;

	printf("Insira um valor:");
	scanf("%d", &numero);

	resultado = Soma_Divisores(numero);

	printf("A soma dos divisores é: %d\n", resultado);

}

int Soma_Divisores (int n) {
	int divisores;

	for(int d = 1; d <= n; d++) {
		if(n %d == 0) {

		divisores = divisores + d;

		return divisores;
		}
	}
}


