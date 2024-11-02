#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Um concurso está sendo realizado, a importância de  R$ 780.000,00 será dividida entre os ganhadores de concurso.\n");
	int premio = 780000;
	int ganhador1, ganhador2, ganhador3;
	ganhador1 = premio * 0.46; 
	ganhador2 = premio * 0.32; 
	ganhador3 = premio * 0.22; 
	printf("Sendo que o primeiro colocado ficará com: %d\n", ganhador1);
	printf("E o segundo colocado ficará com: %d\n", ganhador2);
	printf("E por último o terceiro colocado ficará com: %d\n", ganhador3);
	
	
	
 return 0;
}
