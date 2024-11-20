#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct{
int matricula;
char nome[50];
int nota1, nota2, nota3;
} aluno;

int main(){
		setlocale(LC_ALL, "Portuguese");
		aluno alunos[5];
		
	for(int i = 0; i < 5; i++){
		
		printf("Escreva o nome do %dº aluno:\n", i + 1);
		scanf("%s", alunos[i].nome);
		
		printf("Escreva o nome da matrícula do %dº aluno:\n", i + 1);
		scanf("%d", &alunos[i].matricula);
		
		printf("Escreva a nota da primeira prova:\n", i + 1);
		scanf("%d", &alunos[i].nota1);
		
		printf("Escreva a nota da segunda prova:\n", i + 1);
		scanf("%d", &alunos[i].nota2);
		
		printf("Escreva a nota da terceira prova:\n", i + 1);
		scanf("%d", &alunos[i].nota3);
	}
	
	int maior_nota1 = alunos[0].nota1;
	int indice_maior_nota1 = 0;
	for(int i = 1; i < 5; i++){
		if (alunos[i].nota1 > maior_nota1){
			maior_nota1 = alunos[i].nota1;
			indice_maior_nota1 = i;
		}
	}
	printf("Aluno com a maior nota da primeira prova: %s\n", alunos[indice_maior_nota1].nome);
	
	float maior_media = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3 / 3.0);
	int indice_maior_media = 0;
	for(int i = 1; i < 5; i++){
		float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3 / 3.0);
		if(media > maior_media){
			maior_media = media;
			indice_maior_media = i;
		}
	}
	printf("Aluno com maior média geral: %s\n", alunos[indice_maior_media].nome);
	
	float menor_media = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3 / 3.0);
	int indice_menor_media = 0;
	for(int i = 1; i < 5; i++){
		float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3 / 3.0);
		if(media < 6){
			menor_media = media;
			indice_menor_media = i;
		}
	}
	printf("Aluno com menor média geral: %s\n", alunos[indice_menor_media].nome);
	
	for(int i = 0; i < 5; i++){
		float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3 / 3.0);
		if (media >= 6){
			printf("Aluno %s aprovado.\n", alunos[i].nome);
		} else{
			printf("Aluno %s reprovado.\n", alunos[i].nome);
		}
	}
	
	return 0;
}
