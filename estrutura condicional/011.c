#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, soma = 0;
	
	printf("Escreva um n�mero:\n");
	scanf("%d", &num);
	
	for(int i = 1;i < num; i++){
			soma = soma + i;
			printf("A soma dos valores anteriores ao n�mero que voc� digitou �:\t%d\n", soma);
		}
	
	
	
	return 0;
}
