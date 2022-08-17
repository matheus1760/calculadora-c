#include <stdio.h>
#include <stdlib.h>

int main() { 
  double option1, option2;
  char operator;

  printf("List of Operators: + (add) - (subtract) / (divide) * (multiply)\n");
  printf("Enter Number One: ");
  scanf("%lf", &option1);
  printf("Enter Operator: ");
  scanf(" %c", &operator);
  printf("Enter Number Two: ");
  scanf("%lf", &option2);

  if (operator== '+') {
    printf("%f\n", option1 + option2);
  } else if (operator== '-') {
    printf("%f\n", option1 - option2);
  } else if (operator== '/') {
    printf("%f\n", option1 / option2);
  } else if (operator== '*') {
    printf("%f\n", option1 * option2);
  } else {
    printf("You have not inputted a valid operator!");
  }
}
