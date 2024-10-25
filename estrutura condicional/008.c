#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, media;
	
	printf("Qual foi a nota da sua primeira prova?\n");
	scanf("%d", &n1);
		printf("Qual foi a nota da sua segunda prova?\n");
			scanf("%d", &n2);
				printf("Qual foi a nota da sua terceira prova?\n");
					scanf("%d", &n3);
	
	media = n1 + n2 + n3 / 3;
	
	if (media <= 2.9){
		printf("Sua média foi:  %d\n", media);
		printf("Reprovado.");
	} else if(media <= 4.9){
		printf("Sua média foi:  %d\n", media);
		printf("Recuperação.");
	} else if(media >= 5){
		printf("Sua média foi:  %d\n", media);
		printf("Aprovado.");
}
	return 0;
}
