#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	printf("Escreva um número inteiro:\n");
	scanf("%d", &num1);
	printf("Escreva outro número inteiro:\n");
	scanf("%d", &num2);
	
	if (num1 > num2){
		printf("O primeiro número é maior que o segundo.");
	} else if(num2 > num1){
		printf("O segundo número é maior que o primeiro.");
	} else if(num1 == num2){
		printf("Os dois números anteriores são iguais.");
	}
}

