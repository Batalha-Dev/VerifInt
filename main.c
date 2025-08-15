#include <stdio.h>
#include <ctype.h>

int pain(int n) {
    if (n % 2 == 0) {
        printf("eh par \n");
    } else {
        printf("eh impar \n");
    }
    return 0;
}

int eh_inteiro(char *entrada) {
    int i = 0;

    if (entrada[0] == '-') {
        i = 1;
        if (entrada[1] == '\0')
            return 0;
    }

    for (; entrada[i] != '\0'; i++) {
        if (!isdigit((unsigned char)entrada[i])) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    char entrada[100];
    int n;

    printf("Insira o numero inteiro para verificar se eh par ou impar:\n");
    scanf("%99s", entrada);

    if (!eh_inteiro(entrada)) {
        printf("Entrada invalida! Digite apenas numeros inteiros.\n");
    } else {
        sscanf(entrada, "%d", &n);
        printf("O numero que voce digitou: %d\n", n);
        pain(n);
    }

    return 0;
}