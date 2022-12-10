#include <iostream>
using namespace std;

struct {
    int x;
    int y;
}a[10];

int dist(int x1, int y1, int x2, int y2)
{
    int c1, c2;
    c1 = x2-x1;
    c2 = y2-y1;
    return (c1*c1)+(c2*c2);
}

int main()
{
    int d1, d2, d3, d4;
    for (int i=1; i<=4; i++)
    {
        cout << 'X' << i << '='; cin >> a[i].x;
        cout << 'Y' << i << '='; cin >> a[i].y;
    }
    d1 = dist(a[1].x, a[1].y, a[2].x, a[2].y);
    d2 = dist(a[2].x, a[2].y, a[3].x, a[3].y);
    d3 = dist(a[3].x, a[3].y, a[4].x, a[4].y);
    d4 = dist(a[4].x, a[4].y, a[1].x, a[1].y);
    if(d1==d2 && d1==d3 && d1==d4)
        cout << "Is a square";
    else
        cout << "Is not a square";
    return 0;
}
