//UW CSE333 Exercise 3

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int32_t x;
    int32_t y;
    int32_t z;
} Point3d;

Point3d* AllocatePoint3d(int32_t x, int32_t y, int32_t z);
void PrintPoint(Point3d* p);
int PointCheck(int32_t x, int32_t y, int32_t z, Point3d* point);

int main (int argc, char** argv) {

    int32_t x = 1, y = 2, z = 3;
    Point3d* p1 = AllocatePoint3d(x, y, z);
    if (PointCheck(x, y, z, p1) == 1) {
        return EXIT_FAILURE;
    }

    x = -1000000, y=0, z=2;
    Point3d* p2 = AllocatePoint3d(x, y, z);
    if (PointCheck(x, y, z, p2) == 1) {
        return EXIT_FAILURE;
    }

    x = 'a', y=true, z=2;
    Point3d* p3 = AllocatePoint3d(x, y, z); //converts a to int 97, true to 1
    if (PointCheck(x, y, z, p3) == 1) {
        return EXIT_FAILURE;
    }

    PrintPoint(p1);
    PrintPoint(p2);
    PrintPoint(p3);

    free(p1);
    free(p2);
    free(p3);

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

int PointCheck(int32_t x, int32_t y, int32_t z, Point3d* point) {
    if (x!=point->x || y!=point->y || z!=point->z) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}