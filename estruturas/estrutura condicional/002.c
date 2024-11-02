#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	int raiz;
	printf("Escreva um número positivo:\n");
	scanf("%d", &num1);
	
	if(num1 > 0){
		raiz = sqrt(num1);
		printf("A raiz quadrada deste número é:\t%d", raiz);
	} else if(num1 <= 0){
		printf("Este número é inválido.");
	}
	
	getch();
	return 0;
}
