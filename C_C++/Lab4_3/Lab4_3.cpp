#include<bits/stdc++.h>
#include "Point.cpp"
using namespace std;

int main()
{
    Point p1(1, 2);
    Point p2(3, 4);
    cout << dist(p1, p2) << endl;
    Point p3(1, 1);
    Point p4(1, 3);
    Point p5(4, 1);
    cout << helen(p3, p4, p5) << endl;
    return 0;
}