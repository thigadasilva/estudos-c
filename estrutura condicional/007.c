#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, media;
	
	n3 = n3 * n3;
	
	printf("Qual foi a nota da sua primeira prova?\n");
	scanf("%d", &n1);
		printf("Qual foi a nota da sua segunda prova?\n");
			scanf("%d", &n2);
				printf("Qual foi a nota da sua terceira prova?\n");
					scanf("%d", &n3);
	
	media = n1 + n2 + n3 / 3;
	
	if (media >= 60){
		printf("Sua média foi:  %d\n", media);
		printf("Aprovado.");
	} else if(media < 60){
		printf("Sua média foi:  %d\n", media);
		printf("Reprovado.");
	}
	
	return 0;
}
