#include <stdlib.h>
#include <stdio.h>

/* Arrays are contiguous memory allocations of an type to store multiple
 * elements in a effective way. Its elements can be acessed randonly using the
 * operator `[<int>]` that indexes all elements positions, from zero to the
 * array lenght minus one.
 *
 * Array must be defined with its size. It can be explicit or given by its
 * initialization. Arrays can be initialized using `{<list of values>}`. If a
 * array isn't initialized, its values cannot be determined.
 */

int main(int argc, char const *argv[]) {
  printf("================================\n");
  printf("ARRAYS #1\n");
  printf("================================\n");

  const int array_size = 8;

  int a[array_size],
      b[] = {0, 1, 2, 3, 4, 5, 6, 7};
  double c[array_size];

  printf("\n[1] ----------------------------\n");
  printf("Non-initialized array:\n");
  for (int i = 0; i < array_size; i++) {
    printf("[%i] = %i\n", i, a[i]);
  }

  printf("\n[2] ----------------------------\n");
  printf("Initialized array:\n");
  for (int i = 0; i < array_size; i++) {
    printf("[%i] = %i\n", i, b[i]);
  }

  printf("\n[3] ----------------------------\n");
  printf("Dinamic initialized array:\n");
  for (int i = 0; i < array_size; i++) {
    double value = i * 10.0;
    c[i] = value;
  }
  for (int i = 0; i < array_size; i++) {
    printf("[%i] = %.1lf\n", i, c[i]);
  }

  return EXIT_SUCCESS;
}
