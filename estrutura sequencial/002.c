#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	int porc;
	printf("Escreva um n�mero:\n");
	scanf("%d", &porc);
	porc = porc / 5;
	printf("A quinta parte do n�mero que voc� escreveu �:\t%d", porc);
	return 0;
}
