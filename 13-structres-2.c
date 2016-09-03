#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Structures can be assigned, copied, passed as a argument or returned by a
 * function. It's also legal to get its memory address with `&`. Structres can
 * not be compared with `<` or `==`, for example. Structures can be initialized with `{<list of values>}`, followinf its
 * definition.
 *
 * Structures can be addressed by a Pointer like any other value. When
 * accessing a member `x` of a structure addressed by a pointer `p`, you can
 * use the `->` operator as `p->x`, that is semantically the same as `(*p).x`.
 *
 */

struct point {
  int x;
  int y;
};

struct point build_point(int x, int y) {
  struct point p = {x, y};
  return p;
}

double get_distance(struct point one, struct point other) {
  int delta_x = other.x - one.x,
      delta_y = other.y - one.y;
  double sum = (double)( delta_x * delta_x + delta_y * delta_y ),
         distance = sqrt(sum);
  return distance;
}

int main(int argc, char const *argv[]) {
  printf("================================\n");
  printf("STRUCTURES #2\n");
  printf("================================\n\n");

  struct point p = build_point(1, 2),
               q = build_point(3, 4),
               o = {5, 6};

  struct point *r = &o;

  double distance_pq = get_distance(p, q),
         distance_po = get_distance(p, o),
         distance_qo = get_distance(q, o);

  printf("Distance between (%i,%i) and (%i,%i): %.3lf\n",
         p.x, p.y, q.x, q.y, distance_pq);
  printf("Distance between (%i,%i) and (%i,%i): %.3lf\n",
         p.x, p.y, o.x, o.y, distance_po);
  printf("Distance between (%i,%i) and (%i,%i): %.3lf\n\n",
         q.x, q.y, r->x, r->y, distance_qo);


  return EXIT_SUCCESS;
}
