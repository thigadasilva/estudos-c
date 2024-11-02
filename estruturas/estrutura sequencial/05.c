#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float c;
	printf("Escreva a temperatura atual em Celsius:\n");
	scanf("%f", &c);
	
	float k;
	k = c + 273.15;
	
	printf("A temperatura atual em graus Kelvin é de:%f\n", k);
	
}
