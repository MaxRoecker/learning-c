#include <stdlib.h>
#include <stdio.h>

/* C Language has, internally, only two data types: integers and floating
 * numbers:
 * (1) Integers: `char`, `short`, `int`, `long` and `long long`;
 * (2) Floating point: `float`, `double` and `long double`.
 *
 */

int main(int argc, char const *argv[]) {
  printf("================================\n");
  printf("DATA TYPES\n");
  printf("================================\n");

  printf("\n[1]---- CHAR\n");
  char achar = 127;
  unsigned char auchar = 255;
  signed char aschar = -128;
  printf("Char value: %d\n", achar);
  printf("Unsigned char negative value: %u\n", auchar);
  printf("Signed char negative value: %d\n", aschar);
  printf("Char size in bytes: %ld\n", sizeof(char));

  printf("\n[2]---- SHORT INT\n");
  short ashort = 32767;
  unsigned short aushort = 65535;
  signed short asshort = -32768;
  printf("Short int value: %d\n", ashort);
  printf("Unsigned short int negative value: %u\n", aushort);
  printf("Signed short int negative value: %d\n", asshort);
  printf("Short int size in bytes: %ld\n", sizeof(short));

  printf("\n[3]---- INT\n");
  int aint = 2147483647;
  unsigned int auint = 4294967295;
  signed int asint = -2147483648;
  printf("Int value: %d\n", aint);
  printf("Unsigned Int negative value: %u\n", auint);
  printf("Signed Int negative value: %d\n", asint);
  printf("Int size in bytes: %ld\n", sizeof(int));

  printf("\n[4]---- LONG\n");
  long along = 9223372036854775807l;
  unsigned long aulong = 18446744073709551615ul;
  signed long aslong = -9223372036854775807l;
  printf("Long value: %ld\n", along);
  printf("Unsigned Long negative value: %lu\n", aulong);
  printf("Signed Long negative value: %ld\n", aslong);
  printf("Long size in bytes: %ld\n", sizeof(long));

  printf("\n[5]---- LONG LONG\n");
  long long alonglong = 9223372036854775807ll;
  unsigned long long aulonglong = 18446744073709551615ull;
  signed long long aslonglong = -9223372036854775807ll;
  printf("Long Long value: %lld\n", alonglong);
  printf("Unsigned Long Long negative value: %llu\n", aulonglong);
  printf("Signed Long Long negative value: %lld\n", aslonglong);
  printf("Long Long size in bytes: %ld\n", sizeof(long long));

  printf("\n[6]---- FLOAT\n");
  float afloat = 1024.0f;
  float anfloat = -1.0f;
  printf("Float value: %.3f\n", afloat);
  printf("Float negative value: %.3f\n", anfloat);
  printf("Float size in bytes: %ld\n", sizeof(float));

  printf("\n[7]---- DOUBLE\n");
  double adouble = 2048.0;
  double andouble = -1.0;
  printf("Double value: %.3lf\n", adouble);
  printf("Double negative value: %.3lf\n", andouble);
  printf("Double size in bytes: %ld\n", sizeof(double));

  printf("\n[8]---- LONG DOUBLE\n");
  long double alongdouble = 5096.0l;
  long double anlongdouble = -1.0l;
  printf("Long Double value: %.3Lf\n", alongdouble);
  printf("Long Double negative value: %.3Lf\n", anlongdouble);
  printf("Long Double size in bytes: %ld\n", sizeof(long double));

  return EXIT_SUCCESS;
}
