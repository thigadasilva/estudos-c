#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	printf("Escreva um n�mero inteiro:\n");
	scanf("%d", &num1);
	printf("Escreva outro n�mero inteiro:\n");
	scanf("%d", &num2);
	
	if (num1 > num2){
		printf("O primeiro n�mero � maior que o segundo.");
	} else if(num2 > num1){
		printf("O segundo n�mero � maior que o primeiro.");
	} else if(num1 == num2){
		printf("Os dois n�meros anteriores s�o iguais.");
	}
}

