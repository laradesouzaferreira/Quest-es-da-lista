#include <stdio.h>
#include <locale.h>

float p_ideal (float altura, int sexo);

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");


	float alt, pi;
	int sex;

	printf("\nDigite a sua altura:");
	scanf("%f", &alt);

	printf("\nDigite o seu sexo tendo 1 para masculino e 2 para feminino: ");
	scanf("%d", &sex);

	pi = p_ideal(alt, sex);
	printf("\n%1.f", pi);
}

float p_ideal (float altura, int sexo) {

	float peso;

	if(sexo == 1) {
		peso = 72.7 * altura - 58;
	} else if(sexo == 2) {
		peso = 62.1 * altura - 44.7;
	}

	return peso;
}

