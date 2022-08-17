#include <stdio.h>
#include <stdlib.h>

int main() { 
  float numero1, numero2;
  char operator;

  printf("List of Operators: + (add) - (subtract) / (divide) * (multiply)\n");
  printf("Enter Number One: ");
  scanf("%f", &numero1);
  printf("Enter Operator: ");
  scanf(" %c", &operator);
  printf("Enter Number Two: ");
  scanf("%lf", &numero2);

  if (operator == '+') {
    printf("%f\n", numero1 + numero);
  } else if (operator== '-') {
    printf("%f\n", numero1 - numero2);
  } else if (operator== '/') {
    printf("%f\n", numero1 / numero2);
  } else if (operator== '*') {
    printf("%f\n", numero1 * numero2);
  } else {
    printf("You have not inputted a valid operator!");
  }
}
