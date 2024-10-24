#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	int h, peso;
	printf("Você é homem ou mulher? (H/M)\n");
	scanf("%c", &sexo);
	printf("Qual é a sua altura?\n");
	scanf("%d", &h);
	
	if(sexo == 'H'){
		peso = (72.7 * h) - 58;
		printf("O seu peso ideal é:\t%d", peso);
	} else if(sexo == 'M'){
			peso = (62.1 * h) - 44.7;
		printf("O seu peso ideal é:\t%d", peso);
	}
	
	/* 
 Homens: (72.7 * h) – 58
 Mulheres: (62.1 * h) – 44.7
*/
}
