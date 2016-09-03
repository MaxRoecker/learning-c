#include <stdlib.h>
#include <stdio.h>

/* Arrays and pointers shares are equivalent internally, both stores memory
 * adresses that point to the original data. Arrays of pointers can be declared
 * as follows:
 *  (1) `int *a[n]`: Declare "a" as an array of n pointers to integers.
 *  (2) `int *(a[n])`: Declare "a" as an array of n pointers to integers.
 *
 */

void array_of_pointers(void) {
  printf("\nArray of pointers\n");
  printf("--------------------------------\n");
  int a = 0, b = 1, c = 2;

  int *z[3] = {&a, &b, &c};
  int *(y[3]) = {&c, &b, &a};

  printf("Originals:\t Z = [ ");
  for (int i = 0; i < 2; i++) {
    printf("%i, ", *(z[i]));
  }
  printf("%i ]\n", *(z[2]));
  printf("\t\t Y = [ ");
  for (int i = 0; i < 2; i++) {
    printf("%i, ", *(y[i]));
  }
  printf("%i ]\n\n", *(y[2]));

  a *= 2;
  b *= 2;
  c *= 2;

  printf("Doubled:\t Z = [ ");
  for (int i = 0; i < 2; i++) {
    printf("%i, ", *(z[i]));
  }
  printf("%i ]\n", *(z[2]));
  printf("\t\t Y = [ ");
  for (int i = 0; i < 2; i++) {
    printf("%i, ", *(y[i]));
  }
  printf("%i ]\n\n", *(y[2]));
}

int main(int argc, char const *argv[]) {
  printf("================================\n");
  printf("ARRAYS #3\n");
  printf("================================\n");

  array_of_pointers();

  return EXIT_SUCCESS;
}
