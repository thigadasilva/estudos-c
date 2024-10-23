#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float temp;
	printf("Insira a temperatura em graus fahrenheit:\n");
	scanf("%f", &temp);
	
	float f;
	f = (temp - 32) * 5 / 9;
	
	printf("A temperatura atual em graus celsius é:%f", f);
	return 0;
}
