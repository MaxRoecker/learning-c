#include <stdio.h>
#include <stdlib.h>

const unsigned char max_char_value = 255;

/* The US-ASCII Table (American Standard Code for Information Interchange)
 * is a character encoding used in C language.
 */
int main(int argc, char const *argv[]) {
  unsigned char i = 0;
  do {
    const unsigned char c1 = i,
                        c2 = i + 1,
                        c3 = i + 2,
                        c4 = i + 3;
    printf("%d: %c\t%d: %c\t%d: %c\t%d: %c\n", c1, c1, c2, c2, c3, c3, c4, c4);
    i += 4;
  } while (i != 0);
  return EXIT_SUCCESS;
}
