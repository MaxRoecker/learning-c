#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* An array of a structure can be declared and initialized as a normal array.
 *
 */

struct point {
  int x;
  int y;
};

double get_distance(struct point one, struct point other) {
  int delta_x = other.x - one.x,
      delta_y = other.y - one.y;
  double sum = (double)( delta_x * delta_x + delta_y * delta_y ),
         distance = sqrt(sum);
  return distance;
}

double get_perimeter(struct point points[], int size) {
  double sum = 0.0;
  for (int i = 0; i < size; i++) {
    struct point one = points[i],
                 other = points[(i + 1) % size];
    sum += get_distance(one, other);
  }
  return sum;
}

int main(int argc, char const *argv[]) {
  printf("================================\n");
  printf("STRUCTURES #3\n");
  printf("================================\n\n");

  struct point square[4] = {{1, 1}, {1, 3}, {3, 3}, {3, 1}},
               triangle[3] = {{2,2}, {3, 4}, {4, 2}};



  double square_perimeter = get_perimeter(square, 4),
         triangle_perimeter = get_perimeter(triangle, 3);

  printf("Perimeter of the square: %.3lf\n", square_perimeter);
  printf("Perimeter of the triangle: %.3lf\n\n", triangle_perimeter);

  return EXIT_SUCCESS;
}
