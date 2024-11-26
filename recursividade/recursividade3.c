#include <stdio.h>
#include <locale.h>

int soma(int num){
	int i;
	if (num <= 0){
		return 0;
	} else{
		return num + soma(num - 1);
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Insira um número para o cálculo:\n");
	scanf("%d", &num);
	
	if (num < 0){
		printf("Número inválido.");
	} else {
	printf("O somatório dos números é %d", soma(num));
}
	return 0;
	
}
