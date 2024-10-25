#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
  int N, soma, digito; 
       
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &N);
  printf("\n Numero dado = %d", N);

  soma = 0; 
 
 if(N > 0){
 
  while (N > 0){
    digito =  N % 10; 
    soma = soma + digito;
    N = N / 10; 
  }
} else if(N < 0){
	printf("Número inválido.");
}
  
  printf("\n Soma dos digitos do numero dado = %d\n", soma);
  return 0;
}

