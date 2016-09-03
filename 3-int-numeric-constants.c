#include <stdlib.h>
#include <stdio.h>

/* Integer numbers can be written in different bases in C language:
 *  (1) Binary: The number is started with an "0b". Example: "0b100000" is
        equal to the decimal value "32".
 *  (2) Octal: The number is started with an "0". Example: "040" is equal to
        the decimal value "32".
 *  (3) Hexadecimal: The number is started with an "0x". Example: "0x20" is
        equal to the decimal value "32".
 */
int main(int argc, char const *argv[]) {
  printf("================================\n");
  printf("INTEGER NUMERIC CONSTANTS\n");
  printf("================================\n");
  printf("The number \"32\" can be written in\n");
  printf("a plenty of ways in C language:\n\n");

  int decimal_int = 32,
      bin_int = 0b100000,
      octal_int = 040,
      hexdecimal_int = 0x20;

  printf("Decimal: %i\n", decimal_int);
  printf("Binary: %i\n", bin_int);
  printf("Octa: %i\n", octal_int);
  printf("Hexadecimal: %i\n\n", hexdecimal_int);

  return EXIT_SUCCESS;
}
