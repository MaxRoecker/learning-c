#include <stdlib.h>
#include <stdio.h>

/* In C language, a structure is a collection of one or more values grouped
 * together under a single name. These values are called "members" of the
 * structure.
 *
 * Structures are declared with the keyword `struct` followed by braces where
 * its members are defined. An optional name called "structure tag" can follow
 * the keyword `struct` before the braces. Structure tags can be used as a
 * shorthand for further declarations.The keyword `struct` define a type to the
 * variables declared. Example: `struct {<list of members>} x, y, z;` is
 * analogous to `int x, y, z;`.
 *
 * Structure's members can be accessed with the `.` operator.
 */

struct point {
  int x;
  int y;
};

int main(int argc, char const *argv[]) {
  printf("================================\n");
  printf("STRUCTURES #1\n");
  printf("================================\n\n");

  struct point p, q;

  p.x = 1;
  p.y = 2;

  q.x = 3;
  q.y = 4;

  struct {
    struct point p1;
    struct point p2;
  } rectangle;

  rectangle.p1 = p;
  rectangle.p2 = q;

  printf("Rectangle: { (%i,%i), (%i,%i) }\n\n",
         rectangle.p1.x, rectangle.p1.y,
         rectangle.p2.x, rectangle.p2.y);

  return EXIT_SUCCESS;
}
