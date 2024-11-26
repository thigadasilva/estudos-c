#include <stdio.h>
#include <locale.h>
int potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    } else {
        return base * potencia(base, expoente - 1);
    }
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Erro: N�o � permitido expoente negativo.\n");
    } else {
        printf("%d elevado a %d � %d.\n", base, expoente, potencia(base, expoente));
    }

    return 0;
}

