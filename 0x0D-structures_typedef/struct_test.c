#include <stdlib.h>

struct point {
	int x;
	int y;
};

struct point my_point = { 3, 7 };
struct point *p = &my_point;
