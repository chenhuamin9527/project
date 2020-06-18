#include<bits/stdc++.h>
using namespace std;
class Point
{
public:
    Point(float x, float y);
    Point();
    float getx();
    float gety();
    void set(float n_x, float n_y);
    float distance(Point p);
private:
    int x,y;
};

Point::Point()
{
    x = 0;
    y = 0;
}
void Point::set(float n_x, float n_y)
{
    x = n_x;
    y = n_y;
}

Point::Point(float x, float y) : x(x), y(y)
{

}

float Point::getx()
{
    return x;
}

float Point::gety()
{
    return y;
}

float Point::distance(Point p)
{
    return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
}

int main()
{
    Point d[5];
    d[0].set(1, 2);
    d[1].set(2, 3);
    d[2].set(4, 5);
    float imin = d[0].distance(d[1]);
    int index1, index2;
    for (int i = 0; i < 3; i++)
    {
        for(int j = i+1; j < 3; j++)
        {
            if(d[i].distance(d[j]) <= imin)
                {
                    imin = d[i].distance(d[j]);   
                    index1 = i;
                    index2 = j;
                }
        }
    }
    cout << index1 << " " << index2 << endl;
    cout << "distance is " << imin << endl;
    return 0;
}