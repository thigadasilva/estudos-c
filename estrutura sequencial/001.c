#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int pot;
	printf("Escreva um número:\n");
	scanf("%d", &pot);
	pot = pot * pot;
	printf("O número que você inseriu ao quadrado é:%d\n", pot);
	return 0;
}
