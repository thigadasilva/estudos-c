#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia;
	
	printf("1 a 7 representam os dias da semana, escolha um n�mero:\n");
	scanf("%d", &dia);
	
	
	switch(dia){
		case 1:
		printf("Domingo.");
		break;
		case 2:
		printf("Segunda.");
		break;
		case 3:
		printf("Ter�a.");
		break;
		case 4:
		printf("Quarta.");
		break;
		case 5:
		printf("Quinta.");
		break;
		case 6:
		printf("Sexta.");
		break;
		case 7:
		printf("S�bado.");
		break;
	}
	return 0;
}
