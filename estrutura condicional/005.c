#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	int h, peso;
	printf("Voc� � homem ou mulher? (H/M)\n");
	scanf("%c", &sexo);
	printf("Qual � a sua altura?\n");
	scanf("%d", &h);
	
	if(sexo == 'H'){
		peso = (72.7 * h) - 58;
		printf("O seu peso ideal �:\t%d", peso);
	} else if(sexo == 'M'){
			peso = (62.1 * h) - 44.7;
		printf("O seu peso ideal �:\t%d", peso);
	}
	
	/* 
 Homens: (72.7 * h) � 58
 Mulheres: (62.1 * h) � 44.7
*/
}
