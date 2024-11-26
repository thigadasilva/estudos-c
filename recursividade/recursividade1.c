#include <stdio.h>
#include <locale.h>

int fatorial(int n){
	if (n == 0){
		return 1;
	} else{
		return n * fatorial(n - 1);
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Escreva um número para realizar o cálculo fatorial:\n");
	scanf("%d", &num);
	
	
	printf("O resultadoo deste cálculo é: %d", fatorial(num));
	
	return 1;
}
