#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

struct Point {
    double x;
    double y
};

typedef struct Point Point;

struct Rect {
    Point ll;
    Point ur;
};

typedef struct Rect Rect;

Point makePt(double x, double y);

void printPt(const Point *p, int prec);

Rect makeRect(Point ll, Point ur);

double width(const Rect *r);

double height(const Rect *r);

double area(const Rect *r);

printRect(const Rect *r, int prec);

#endif
