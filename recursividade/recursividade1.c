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
	
	printf("Escreva um n�mero para realizar o c�lculo fatorial:\n");
	scanf("%d", &num);
	
	
	printf("O resultadoo deste c�lculo �: %d", fatorial(num));
	
	return 1;
}
