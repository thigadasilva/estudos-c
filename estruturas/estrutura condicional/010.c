#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int menu, num1, num2, soma, sub, multi, div;
	
	printf("Escolha 1 - Soma, 2 - Subtra��o, 3 - Multiplica��o, 4 - Divis�o:\n");
	scanf("%d", &menu);
	
	switch(menu){
			case 1:
			printf("Digite um n�mero:\n");
			scanf("%d", &num1);
			printf("Digite outro n�mero:\n");
			scanf("%d", &num2);
			
			printf("A soma dos n�meros anteriores �:\t%d", num1 + num2);
			break;
			case 2:
			printf("Digite um n�mero:\n");
			scanf("%d", &num1);
			printf("Digite outro n�mero:\n");
			scanf("%d", &num2);
			
			printf("A subtra��o dos n�meros anteriores �:\t%d", num1 - num2);
			break;
			case 3:
			printf("Digite um n�mero:\n");
			scanf("%d", &num1);
			printf("Digite outro n�mero:\n");
			scanf("%d", &num2);
			
			printf("A multiplica��o dos n�meros anteriores �:\t%d", num1 * num2);
			break;
			case 4:
			printf("Digite um n�mero:\n");
			scanf("%d", &num1);
			printf("Digite outro n�mero:\n");
			scanf("%d", &num2);
			
			printf("A divis�o dos n�meros anteriores �:\t%d", num1 / num2);
			break;
	}
}
