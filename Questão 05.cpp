#include <stdio.h>
#include <locale.h>

void numero ();

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");

	numero ();
}

void numero () {
	int valor;

	printf("Insira um valor:");
	scanf("%d", &valor);

	if(valor < 0) {
		printf("\nO n�mero � negativo:");
	} else {
		printf("\nO n�mero � positivo:");
	}
}
