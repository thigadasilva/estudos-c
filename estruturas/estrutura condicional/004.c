#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int salario, emprestimo, porcentagem;
	printf("Insira o seu sal�rio mensal:\n");
	scanf("%d", &salario);
	
	printf("Quanto voc� quer de empr�stimo?\n");
	scanf("%d", &emprestimo);
	
	porcentagem = salario * 0.20;
	
	if(emprestimo > porcentagem){
		printf("Empr�stimo n�o concedido.");
	} else if(emprestimo <= porcentagem){
		printf("Empr�stimo concedido.");
	}
	return 0;
}
