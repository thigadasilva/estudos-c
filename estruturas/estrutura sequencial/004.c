#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float c;
	printf("Escreva a temperatura atual em Kelvin:\n");
	scanf("%f", &c);
	
	float k;
	k = c - 273.15;
	
	printf("A temperatura atual em graus celsius é de:%f\n", k);
	
}
