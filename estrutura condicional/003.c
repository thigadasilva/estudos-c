#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a;
	printf("Escreva um n�mero:\n");
	scanf("%d", &a);
	
	if(a % 2 == 1){
		printf("O n�mero digitado � impar.");
	} else if(a % 2 == 0){
		printf("O n�mero digitado � par.");
	}
	
	return 0;
}
