#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int salario, emprestimo, porcentagem;
	printf("Insira o seu salário mensal:\n");
	scanf("%d", &salario);
	
	printf("Quanto você quer de empréstimo?\n");
	scanf("%d", &emprestimo);
	
	porcentagem = salario * 0.20;
	
	if(emprestimo > porcentagem){
		printf("Empréstimo não concedido.");
	} else if(emprestimo <= porcentagem){
		printf("Empréstimo concedido.");
	}
	return 0;
}
