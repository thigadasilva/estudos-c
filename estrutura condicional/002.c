#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	int raiz;
	printf("Escreva um n�mero positivo:\n");
	scanf("%d", &num1);
	
	if(num1 > 0){
		raiz = sqrt(num1);
		printf("A raiz quadrada deste n�mero �:\t%d", raiz);
	} else if(num1 <= 0){
		printf("Este n�mero � inv�lido.");
	}
	
	getch();
	return 0;
}
