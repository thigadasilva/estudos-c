#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	int porc;
	printf("Escreva um número:\n");
	scanf("%d", &porc);
	porc = porc / 5;
	printf("A quinta parte do número que você escreveu é:\t%d", porc);
	return 0;
}
