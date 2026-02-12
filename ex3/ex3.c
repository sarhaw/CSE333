//UW CSE333 Exercise 3

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <errno.h>

typedef struct {
    int32_t x;
    int32_t y;
    int32_t z;
} Point3d;

Point3d* AllocatePoint3d(int32_t x, int32_t y, int32_t z);
void PrintPoint(Point3d* p);

int main () {

    Point3d* p1 = AllocatePoint3d(1, 2, 3);
    Point3d* p2 = AllocatePoint3d(-1000000, 0, 2);
    Point3d* p3 = AllocatePoint3d('a', 1, 2); //converts a to int 97
    Point3d* p4 = AllocatePoint3d(true, 1, 2); //converts true to int 1

    PrintPoint(p1);
    PrintPoint(p2);
    PrintPoint(p3);
    PrintPoint(p4);

    free(p1);
    free(p2);
    free(p3);
    free(p4);

    return EXIT_SUCCESS;
}

Point3d* AllocatePoint3d(int32_t x, int32_t y, int32_t z) {
    Point3d* p = malloc(sizeof(Point3d));
    p->x = x;
    p->y = y;
    p->z = z;
    return p;
}

void PrintPoint(Point3d* p) {
    printf("(%d, %d, %d)\n", p->x, p->y, p->z);
}