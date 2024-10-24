#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a;
	printf("Escreva um número:\n");
	scanf("%d", &a);
	
	if(a % 2 == 1){
		printf("O número digitado é impar.");
	} else if(a % 2 == 0){
		printf("O número digitado é par.");
	}
	
	return 0;
}
