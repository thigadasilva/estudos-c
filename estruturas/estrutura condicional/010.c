#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int menu, num1, num2, soma, sub, multi, div;
	
	printf("Escolha 1 - Soma, 2 - Subtração, 3 - Multiplicação, 4 - Divisão:\n");
	scanf("%d", &menu);
	
	switch(menu){
			case 1:
			printf("Digite um número:\n");
			scanf("%d", &num1);
			printf("Digite outro número:\n");
			scanf("%d", &num2);
			
			printf("A soma dos números anteriores é:\t%d", num1 + num2);
			break;
			case 2:
			printf("Digite um número:\n");
			scanf("%d", &num1);
			printf("Digite outro número:\n");
			scanf("%d", &num2);
			
			printf("A subtração dos números anteriores é:\t%d", num1 - num2);
			break;
			case 3:
			printf("Digite um número:\n");
			scanf("%d", &num1);
			printf("Digite outro número:\n");
			scanf("%d", &num2);
			
			printf("A multiplicação dos números anteriores é:\t%d", num1 * num2);
			break;
			case 4:
			printf("Digite um número:\n");
			scanf("%d", &num1);
			printf("Digite outro número:\n");
			scanf("%d", &num2);
			
			printf("A divisão dos números anteriores é:\t%d", num1 / num2);
			break;
	}
}
