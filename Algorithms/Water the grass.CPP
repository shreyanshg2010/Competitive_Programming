#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

#define MAX_SIZE 10000

struct Sprinkler
{
    double left;
    double right;
    bool operator <(const Sprinkler &s) const
    {
        return left <s.left;
    }
}sprinklers[MAX_SIZE+5];

int WaterTheGrass(int m, int l)
{
    double rightmost = 0.0;
    int count = 0;
    int i, j;
    for (i = 0; i <m; i = j)
    {
        if (sprinklers[i].left > rightmost) break;
        for (j = i+1; j <m && sprinklers[j].left <= rightmost; ++j)
        {
            if (sprinklers[j].right > sprinklers[i].right)
            {
                i = j;
            }
        }
        ++count;
        rightmost = sprinklers[i].right;
        if (rightmost >= l) break;
    }
    if (rightmost >= l)
    {
        return count;
    }
    return -1;
}

int main(void)
{
    int n, l;
    double w;
    while (cin >> n >> l >> w)
    {
        w /= 2.0;
        int i, m = 0;
        for (i = 0; i <n; ++i)
        {
            int p, r;
            cin>>p>>r;
            if (r > w)
            {
                double halfCoveredLen = sqrt((double)r*r - w*w);    //Attention to double, wrong several times...
                sprinklers[m].left = (double)p - halfCoveredLen;
                sprinklers[m++].right = (double)p + halfCoveredLen;
            }
        }
        sort(sprinklers, sprinklers+m);
        cout <<WaterTheGrass(m, l) <<endl;
    }
    return 0;
}
