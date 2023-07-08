// program to evaluate a simple expression of the form <number> <operator> <number>

#include <stdio.h>

int main(void) {
  float val1, val2;
  char op;

  printf ("Type in your expression.\n");
  scanf ("%f %c %f", &val1, &op, &val2);

  if (op == '+') {
    printf ("%.2f\n", val1 + val2);
  }
  else if (op == '-') {
    printf ("%.2f\n", val1 - val2);
  }
  else if (op == '*') {
    printf ("%.2f\n", val1 * val2);
  }
  else {
    printf ("%.2f\n", val1 / val2);
  }
  
  return 0;
}