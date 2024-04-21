#include <stdio.h>
#include <stdlib.h>

typedef long long unsigned UINT64;

typedef struct Point {
    double x, y;
} Point;

/*
    This solution is going to be work

struct Point {
    double x, y;
};

typedef struct Point Point;

*/

int main()
{
    // Typedef is a simple way to definition of a type
    // Instead of "unsigned long long a" type definition we can do this: typedef unsigned long long UINT64;
    // Now we can reference the type like: UINT64 a;
    UINT64 a = 5;
    printf("%d\n", sizeof(a)*8);


    // We can use this for struct
    Point p;
    p.x = 0.24;
    p.y = 0.78;

    printf("%lf - %lf\n", p.x, p.y);

    // If we are not gonna use typedef we need to refer the struct as a struct Point.

    return 0;
}
