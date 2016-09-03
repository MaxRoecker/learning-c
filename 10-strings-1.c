#include <stdlib.h>
#include <stdio.h>

/* Strings in C language are arrays of chars. A Constant string, written as
 * `"Hello, world!"`, are internally representend as an array of all its
 * characters ending with the the NULL character (`'\0'`), that indicates its
 * ends. Like any array, a constant string can be assigned to any pointer of
 * char (denoted by `char *<id>`).
 */

int is_strings_equals(char *a, char *b) {
  int i = 0;
  while ((a[i] == b[i]) && (a[i] != '\0')) {
    i += 1;
  }
  return (a[i] == b[i]);
}


int main(int argc, char const *argv[]) {
  printf("================================\n");
  printf("STRINGS #1\n");
  printf("================================\n\n");

  char a[] = {'H', 'e', 'l', 'l', 'o', ',', ' ',
              'w', 'o', 'r', 'l', 'd', '!', '\0'};
  char *n = "Hello, world!",
       *m = a;

  printf("Array:\t%s\n", n);
  printf("String:\t%s\n\n", m);

  printf("Are the strings equal?\n- ");
  if (is_strings_equals(m, n)) {
    printf("Yes! :)\n\n");
  } else {
    printf("No... :(\n\n");
  }

  return EXIT_SUCCESS;
}
