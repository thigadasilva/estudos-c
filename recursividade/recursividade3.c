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
	
	printf("Insira um n�mero para o c�lculo:\n");
	scanf("%d", &num);
	
	if (num < 0){
		printf("N�mero inv�lido.");
	} else {
	printf("O somat�rio dos n�meros � %d", soma(num));
}
	return 0;
	
}
