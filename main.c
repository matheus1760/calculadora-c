#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Suporte de até duas casas decimais

int main() {   
    float numero1, numero2;
    char operador;
    char* operadores_disponiveis = "+-*/";

    printf("A calculadora suporta números com precisão de até duas casas decimais\n");
    printf("Lista de operações: + (soma), - (subtração), * (multiplicação) e / (divisão)\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    while (1) {
	printf("Insira o operador: ");
	// Espaço antes do "%c" para eliminar espaços e backspaces do input (buffer do último input)
	scanf(" %c", &operador);
    	
	if (strchr((operadores_disponiveis), operador) != NULL) {
	    break;
	} else {
	    printf("Operador inválido\n");
	}
    }

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);
    
    printf("-------------------\n");
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

    printf("\n-------------------\n");

    return 0;
}
