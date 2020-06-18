#include <iostream>
#include<bits/stdc++.h>
#include "Point.h"
using namespace std;

float Point::getX()
{
    return x;
}

float Point::getY()
{
    return y;
}

float dist(Point p1, Point p2)
{

    return (sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2)));
}

float helen(Point p1, Point p2, Point p3)
{
    float a1 = dist(p1, p2);
    float a2 = dist(p1, p3);
    float a3 = dist(p2, p3);
    float p = (a1 + a2 + a3)/2;
    float s = sqrt(p * (p - a1) * (p - a2) * (p - a3));
    return s;
}