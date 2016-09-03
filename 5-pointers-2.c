#include <stdlib.h>
#include <stdio.h>

/* Pointers are really useful to pass parameters of functions as a referece
 * instead as a value. Using pointers, a function can access the variable value
 * directly.
 *
 * In this example, the value that number points are multiplicated by
 * a given multiplier.
 */
void multiply(int *number, int multiplier) {
  int mul = (*number) * multiplier;
  *number = mul;
}

/* Pointers can also be return by functions. It's extremely important to never
 * return pointers to local variables - because when the function ends the
 * variable is also gone; and the pointer returned doesn't mean anything when
 * the value it adress doesn't exists anymore.
 */
int * add(int *number, int adder) {
  int mul = (*number) + adder;
  *number = mul;
  return number;
}

int main(int argc, char const *argv[]) {
  printf("================================\n");
  printf("POINTERS #2\n");
  printf("================================\n");

  int a = 10,
      b = 20,
      multiplier = 2,
      adder = 12;

  int *x = &(a),
      *y = &(b),
      *z = add(y, adder);

  multiply(x, multiplier);

  printf("Valor de 'a': %i\n", a);
  printf("Valor de 'b': %i\n", *z);

  return EXIT_SUCCESS;
}
