#include <stdlib.h>
#include <stdio.h>

/* C provides a way to create new data types with the `typedef` declaration.
 *
 */
struct int_vector_struct {
  int *array;
  int size;
};

typedef struct int_vector_struct int_vector;

int_vector build_int_vector(int array[], int size) {
  int_vector vector = {array, size};
  return vector;
}

void multiply_by(int_vector *vector, int multiplier) {
  for (int i = 0; i < vector->size; i++) {
    vector->array[i] *= multiplier;
  }
}

void print_int_vector(const int_vector vector) {
  int size = vector.size;
  printf("{ array: [ ");
  for (int i = 0; i < (size - 1); i++) {
    printf("%i, ", vector.array[i]);
  }
  printf("%i ], size: %i }", vector.array[size - 1], size);
}

int main(int argc, char const *argv[]) {
  printf("================================\n");
  printf("TYPE DEFINITION\n");
  printf("================================\n\n");

  int a_array[] = {1, 2, 3, 4},
      b_array[] = {0, 1, 2};

  int_vector a = build_int_vector(a_array, 4),
             b = build_int_vector(b_array, 3);

  printf("Original: A = ");
  print_int_vector(a);
  printf("\n          B = ");
  print_int_vector(b);
  printf("\n\n");

  multiply_by(&a, 2);
  multiply_by(&b, 2);

  printf("Double: A = ");
  print_int_vector(a);
  printf("\n        B = ");
  print_int_vector(b);
  printf("\n\n");

  return 0;
}
