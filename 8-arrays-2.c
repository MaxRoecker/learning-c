#include <stdlib.h>
#include <stdio.h>

/* Arrays can be passed as a argument to a function in three ways:
 *  (1) As a sized array;
 *  (2) As a non-sized array;
 *  (3) As a pointer.
 */
int sum_sized_array(int a[3]) {
  int sum = 0;
  for (int i = 0; i < 3; i++) {
    sum += a[i];
  }
  return sum;
}

int sum_nonsized_array(int a[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }
  return sum;
}

int sum_pointer_array(int *a, int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }
  return sum;
}


/* Functions cannot return arrays as a result, but they can return pointers to
 * arrays. Note that the array cannot be a local variable because it will be
 * gone when the function terminates, leaving the pointer addressing nowhere.
 *
 */

int * multiply_pointer_array_by(int *array, int array_size, int multiplier) {
  for (int i = 0; i < array_size; i++) {
    array[i] *= multiplier;
  }
  return array;
}

void print_array(int *array, int size, char *format) {
  printf("[ ");
  for (int i = 0; i < (size - 1); i++) {
    printf(format, array[i]);
    printf(", ");
  }
  printf(format, array[size - 1]);
  printf(" ]");
}

int main(int argc, char const *argv[]) {
  printf("================================\n");
  printf("ARRAYS #2\n");
  printf("================================\n");

  int a[] = {0, 1, 2, 3, 4},
      b[3] = {0, 1, 2},
      c[] = {10, 20, 30};
  int *cp = c;

  int sum_a = sum_nonsized_array(a, 5),
      sum_b = sum_sized_array(b),
      sum_c = sum_pointer_array(cp, 3);

  int *double_a = multiply_pointer_array_by(a, 5, 2);

  printf("Sum of 'a': %i\n", sum_a);
  printf("Sum of 'b': %i\n", sum_b);
  printf("Sum of 'c': %i\n", sum_c);
  printf("Double of 'a': ");
  print_array(double_a, 5, "%i");
  printf("\n");

  return EXIT_SUCCESS;
}
