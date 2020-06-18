#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Point
{
public:
    Point(float xx, float yy)
    {
        x = xx;
        y = yy;
    }
    float getX();
    float getY();
private:
    float x,y;
};
