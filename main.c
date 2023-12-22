#include <stdio.h>
#include <stdlib.h>
#include "rectangle.h"

int main()
{

    double x1 = 0.0;
    double y1 = 0.0;

    double x2 = 4.5;
    double y2 = 3.5;

    int prec1 = 1;
    int prec2 = 2;

    Point p1;
    Point p2;

    Rect r;

    double get_width;
    double get_height;
    double get_area;

    p1 = makePt(x1, y1);

    p2 = makePt(x2, y2);

    printf("Pisteet ");

    printPt(&p1, prec1);

    printf(" ja ");

    printPt(&p2, prec2);

    printf("\n");

    r = makeRect(p1, p2);

    printf("Suorakulmio ");

    printRect(&r, prec1);

    printf("\n");

    get_width = width(&r);

    printf("Leveys: %f", get_width);

    printf("\n");

    get_height = height(&r);

    printf("Korkeus: %f", get_height);

    printf("\n");

    get_area = area(&r);

    printf("Pinta-ala: %f", get_area);

    printf("\n");
}
