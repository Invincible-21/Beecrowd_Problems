#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int c = 0;
    if (x > y)
    {
        c = x;
        x = y;
        y = c;
    }
    x++;

    for (int i = x; i < y; i++)
    {
        if ((i % 5 == 2) || (i % 5 == 3))
            cout << i << endl;
    }

    return 0;
}