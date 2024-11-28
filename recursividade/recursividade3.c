#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[6] = {1, 0, 5, -2, -5, 7}; 
	int soma = 0;
	soma = vetor[0] + vetor[1] + vetor[5];
	
	vetor[3] = 100;
	
	printf("VETOR:\n %d\n %d\n %d\n %d\n %d\n %d\n A soma dos vetores 0, 1 e 5 é:%d", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5], vetor[6], soma);
	
	return 0;
	
}
