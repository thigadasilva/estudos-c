#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int pot;
	printf("Escreva um n�mero:\n");
	scanf("%d", &pot);
	pot = pot * pot;
	printf("O n�mero que voc� inseriu ao quadrado �:%d\n", pot);
	return 0;
}
