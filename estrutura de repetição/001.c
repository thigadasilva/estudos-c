#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, a, num, maiornum, menornum;
	
	printf("Quantas vezes um número deve ser lido?:\n");
	scanf("%d", &a);
	
	for(i = 1; i <= a; i++){
		printf("Escreva um número:\n");
		scanf("%d", &num);
		
		if(num > maiornum){
			maiornum = num;
		} else if(num < menornum){
			menornum = num;
		}
		
	}
	printf("O maior número lido foi:\n%d\n E a quantidade de vezes que ele foi escrito foi de:\n%d\n", maiornum,i);
	return 0;
}
