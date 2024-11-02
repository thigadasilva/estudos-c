#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int km;
	printf("Escreva a sua velocidade:\n");
	scanf("%d", &km);
	
	float m;
	m = km * 3.6;
	
	printf("Você estava percorrendo:%f\n", m);
	printf("Por segundo.");
}
