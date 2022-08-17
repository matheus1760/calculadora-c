#include <stdio.h>
#include <stdlib.h>

// Suporte de até duas casas decimais

int main() { 
    float numero1, numero2;
    char operador;

    printf("A calculadora suporta números com precisão de até duas casas decimais\n");
    printf("Lista de operações: + (soma), - (subtração), * (multiplicação) e / (divisão)\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Insira o operador: ");
    // Espaço antes do "%c" para eliminar espaços e backspaces do input (buffer do último input)
    scanf(" %c", &operador);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    printf("O resultado é: ");

    if (operador == '+') {
	printf("%.2f", numero1 + numero2);
    } else if (operador == '-') {
	printf("%.2f", numero1 - numero2);
    } else if (operador == '*') {
	printf("%.2f", numero1 * numero2);
    } else if (operador == '/') {
	printf("%.2f", numero1 / numero2);
    }

    printf("\n");

    return 0;
}
