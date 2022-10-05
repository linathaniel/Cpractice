#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;

    char other[512];
};

float dist(struct point pt1, struct point pt2)
{
    int xdist = pt2.x - pt1.x;
    int ydist = pt2.y - pt1.y;

    float ret = sqrt(xdist*xdist + ydist*ydist);
    return ret;
}

float dist_improved(struct point *pt1, struct point *pt2)
{
    int xdist = pt1->x - pt2->x;
    int ydist = pt1->y - pt2->y;

    float ret = sqrt(xdist*xdist + ydist*ydist);
    return ret;
}

int main (int argc, char** argv)
{
    printf("10/04/2022\n");

    struct point p1;
    p1.x = 0;
    p1.y = 0;

    struct point p2;
    p2.x = 3;
    p2.y = 4;

    // calculate distance between p1 and p2
    printf("%f\n", dist_improved(&p1, &p2));

    // add a student struct with 4 different data types

    return 0;
}