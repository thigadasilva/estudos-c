/*Fa�a um programa que realize a leitura dos seguintes dados relativos a um conjunto de 
alunos: Matricula, Nome, C�digo da Disciplina, Nota1 e Nota2. Considere uma turma de � 
at� 10 alunos. Ap�s ler todos os dados digitados, e depois de armazena-los em um vetor de 
estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais 
(use uma m�dia ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0). 
*/
#include <stdio.h>
#include <locale.h>

typedef struct{
	int matricula, codigo, nota1, nota2;
	char nome[100];
} alunos;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	alunos aluno[3];
	
	for(int i = 0; i < 3; i++){
		printf("Escreva o n�mero da matr�cula do %d� aluno:\n", i + 1);
		scanf("%d", &aluno[i].matricula);
		printf("Escreva o nome do %d� aluno:\n", i + 1);
		scanf("%s", aluno[i].nome);
		printf("Escreva o c�digo da disciplina do %d� aluno:\n", i + 1);
		scanf("%d", &aluno[i].codigo);
		printf("Escreva a primeira nota do %d� aluno:\n", i + 1);
		scanf("%d", &aluno[i].nota1);
		printf("Escreva a segunda nota do %d� aluno:\n", i + 1);
		scanf("%d", &aluno[i].nota2);
	}
	
	
	for(int i = 0; i < 3; i++){
		int calculo = aluno[i].nota1 * 1;
		int calculo2 = aluno[i].nota2 * 2;
		int media = calculo + calculo2;
		printf("O aluno %s, ficou com m�dia: %d\n", aluno[i].nome, media / 3);
	}
	
	return 0;
}
