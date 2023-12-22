#include <stdio.h>
#include <stdlib.h>
#include "rectangle.h"

Point makePt(double x, double y)
{
    Point point_;

    point_.x = x;
    point_.y = y;

    return point_;
}

void printPt(const Point *p, int prec)
{
    printf("(%.*f, ", prec, p->x);
    printf("%.*f)", prec, p->y);
}

Rect makeRect(Point ll, Point ur)
{
    Rect rect_;

    rect_.ll = ll;
    rect_.ur = ur;

    return rect_;
}

double width(const Rect *r)
{
    double rect_width;
    double x1;
    double x2;

    x2 = r->ur.x;
    x1 = r->ll.x;

    rect_width = x2 - x1;

    return rect_width;
}

double height(const Rect *r)
{
    double rect_height;
    double y1;
    double y2;

    y2 = r->ur.y;
    y1 = r->ll.y;

    rect_height = y2 - y1;

    return rect_height;
}

double area(const Rect *r)
{
    double rect_area;
    double width_;
    double height_;

    width_ = width(r);
    height_ = height(r);

    rect_area = width_ * height_;

    return rect_area;
}

printRect(const Rect *r, int prec)
{
    Point p1;
    Point p2;
    double p1_x;
    double p1_y;
    double p2_x;
    double p2_y;

    p1 = r->ll;
    p2 = r->ur;

    p1_x = p1.x;
    p1_y = p1.y;
    p2_x = p2.x;
    p2_y = p2.y;

    printf("Rect(ll=(%.*f,", prec, p1_x);
    printf(" %.*f),", prec, p1_y);
    printf(" ur=(%.*f, ", prec, p2_x);
    printf("%.*f))", prec, p2_y);

}
