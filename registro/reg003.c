/* Fa�a um programa que armazene em um registro de dados (estrutura composta) os
dados de um funcion�rio de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF,
Data de Nascimento, C�digo do Setor onde trabalha (0-99), Cargo que ocupa (string de at� 
30 caracteres) e salario. Os dados devem ser digitados pelo usu�rio, armazenados na 
estrutura e exibidos na tela.
*/
#include <stdio.h>
#include <locale.h>


typedef struct{
	char nome[100], sexo, cargo[30];
	int idade, cpf, data;
	char setor[99];
	float salario;
} sistema;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	sistema funcionario;
	
	printf("Escreva o seu nome:\n");
	scanf("%s", funcionario.nome);
	getchar();
	printf("Insira sua idade:\n");
	scanf("%d", &funcionario.idade);
	getchar();
	printf("Sexo correspondente (M/F):\n");
	scanf("%c", &funcionario.sexo);
		getchar();
	printf("CPF:\n");
	scanf("%d", &funcionario.cpf);
		getchar();
	printf("Data de nascimento:\n");
	scanf("%d", &funcionario.data);
		getchar();
	printf("C�digo do seu setor:\n");
	scanf("%s", funcionario.setor);
		getchar();
	printf("Cargo:\n");
	scanf("%s", funcionario.cargo);
		getchar();
	printf("Sal�rio:\n");
	scanf("%f", &funcionario.salario);
		getchar();
	
	printf("FICH�RIO:\n");
	printf("Nome: %s\nIdade: %d\nSexo: %c\nCPF: %d\n", funcionario.nome, funcionario.idade, funcionario.sexo, funcionario.cpf);
	printf("Data de Nascimento: %d\nC�digo do setor: %s\nCargo: %s\nSal�rio: %f", funcionario.data, funcionario.setor, funcionario.cargo, funcionario.salario);
	
	
	return 0;
}
