#include <stdlib.h>
#include <stdio.h>

/* A multidimensional array (MA) is a array where its elements are also arrays
 * of the same type. If all arrays of a multidimensional array have the same
 * size, then it's called uniform multidimensional array (UMA).
 *
 * The number of dimentions in a multidimensional array is defined by the
 * quantity of arrays of arrays present. A UMA with two dimensions are usually
 * called as a "matrix".
 */

int main(int argc, char const *argv[]) {
  printf("================================\n");
  printf("MULTIDIMENSIONAL ARRAYS\n");
  printf("================================\n");

  int m[3][1],
      n[2][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7}
      },
      o[5][6][3];

  char hello[] = {6, 'H', 'e', 'l', 'l', 'o'},
       wonderful[] = {10, 'W', 'o', 'n', 'd', 'e', 'r', 'f', 'u', 'l'},
       world[] = {6, 'W','o','r','l','d'},
       *words[3] = {hello, wonderful, world};

  printf("\n[1] ----------------------------\n");
  printf("Non-initialized multidimensional array [3,1]:\n");
  printf("[\n");
  for (int i = 0; i < 3; i++) {
    printf("  [ ");
    for (int j = 0; j < 1; j++) {
      printf("%i ", m[i][j]);
    }
    printf("],\n");
  }
  printf("]\n");

  printf("\n[2] ----------------------------\n");
  printf("Initialized multidimensional array [2,4]:\n");
  printf("[\n");
  for (int i = 0; i < 2; i++) {
    printf("  [ ");
    for (int j = 0; j < 4; j++) {
      printf("%i ", n[i][j]);
    }
    printf("],\n");
  }
  printf("]\n");

  printf("\n[3] ----------------------------\n");
  printf("Dynamic initialized multidimensional array [5, 6, 3]:\n");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 6; j++) {
      for (int k = 0; k < 3; k++) {
        o[i][j][k] = i + j + k;
      }
    }
  }
  printf("[\n");
  for (int i = 0; i < 5; i++) {
    printf("  [\n");
    for (int j = 0; j < 6; j++) {
      printf("    [ ");
      for (int k = 0; k < 3; k++) {
        printf("%i ", o[i][j][k]);
      }
      printf("],\n");
    }
    printf("  ],\n");
  }
  printf("]\n");

  printf("\n[3] ----------------------------\n");
  printf("Non-uniform multidimensional array [3,x]:\n");
  printf("[\n");
  for (int i = 0; i < 3; i++) {
    printf("  [ ");
    char word_size = words[i][0];
    for (int j = 1; j < word_size; j++) {
      printf("%c", words[i][j]);
    }
    printf(" ],\n");
  }
  printf("]\n");

  printf("\n");
  return EXIT_SUCCESS;
}
