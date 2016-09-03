#include <stdlib.h>
#include <stdio.h>

/* Pointers, denoted by `<type> *<id>`, allows you to store memory addresses as
 * its value. A pointer that points to nowhere is usually defined to point to a
 * "NULL" value.
 *  (1) The operator `&<id>` returns the memory address of the given identifier.
 *  (2) The operator `*<id>` returns the value of the memory address stored in
        the pointer.
 *  (3) You can copy the memory address of a pointer to another pointer by
        using atribuition `=`.
 */
void pointers_to_variables(void) {
  printf("\n[1] ----------------------------\n\n");
  printf("Pointers to variables:\n");
  int a = 32,
      b = a;
  int *c = &(a),
      *d = &(b),
      *e = NULL;
  *c = 16;
  e = c;
  printf("Memory Address of 'a': %p\n", c);
  printf("Value of 'a': %i\n\n", *e);
  printf("Memory Address of 'b': %p\n", d);
  printf("Value of 'b': %i\n\n", *d);
}

/* A constant, denoted by "const <type> <id>", has a particular behavior: it
 * exclusively allows read-only operations to the value it represents. Pointers
 * to constants, denoted by "const <type> *<id>", has the same behavior.
 *
 * However, if you define a non-constant pointer that address to a constant, you
 * can perform read and write operations in the value. This is not recommended.
 */
void pointers_to_constants(void) {
  printf("\n[2] ----------------------------\n\n");
  printf("Pointers to constants:\n");
  const int a = 32,
            b = 16;
  const int *c = &(a);
  int *d = &(b);
  *d = 8;
  printf("Memory Address of 'a': %p\n", c);
  printf("Value of 'a': %i\n\n", *c);
  printf("Memory Address of 'b': %p\n", d);
  printf("Value of 'b': %i\n\n", *d);
}

/* A constant pointer, denoted by "<type> *const <id>", behaves like a constant
 * to a memory address value. You can change the value addressed by the pointer,
 * but you cannot change the memory address in the pointer.
 */
void constant_pointers_to_variables(void) {
  printf("\n[3] ----------------------------\n\n");
  printf("Constant pointer to variables:\n");
  int a = 32,
      b = 16;
  int *const c = &(a);
  int *const d = &(b);
  *d = *c;
  printf("Memory Address of 'a': %p\n", c);
  printf("Value of 'a': %i\n\n", *c);
  printf("Memory Address of 'b': %p\n", d);
  printf("Value of 'b': %i\n\n", *d);
}

/* A constant pointer to a constant exclusively allows read-only operations in a
 * constant memory address value. Neither the pointer value nor the value
 * addressed by it can be changed after its defition.
 */
void constant_pointers_to_constants(void) {
  printf("\n[4] ----------------------------\n\n");
  printf("Constant pointer to variables:\n");
  const int a = 32,
            b = 16;
  const int *const c = &(a);
  const int *const d = &(b);
  printf("Memory Address of 'a': %p\n", c);
  printf("Value of 'a': %i\n\n", *c);
  printf("Memory Address of 'b': %p\n", d);
  printf("Value of 'b': %i\n\n", *d);
}

int main(int argc, char const *argv[]) {
  printf("================================\n");
  printf("POINTERS #1\n");
  printf("================================\n");

  pointers_to_variables();
  pointers_to_constants();
  constant_pointers_to_variables();
  constant_pointers_to_constants();

  printf("\n");
  return EXIT_SUCCESS;
}
