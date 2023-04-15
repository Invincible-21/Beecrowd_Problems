#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x == y)
        cout << "0\n";
    else if (x > y && (x > 0 && y > 0))
    {
        int sum = 0;
        for (int i = y; i < x; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << endl;
    }
    else if (x > y && y < 0)
    {
        int sum = 0;
        for (int i = x; i > y; i--)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << endl;
    }
    else if (x < y && (x > 0 && y > 0))
    {
        int sum = 0;
        for (int i = x; i < y; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << endl;
    }
    else if (x > y && (x < 0 && y < 0))
    {
        int sum = 0;
        for (int i = y; i < x; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << endl;
    }
    else if (x < y && (x < 0 && y < 0))
    {
        int sum = 0;
        for (int i = x; i < y; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << endl;
    }

    return 0;
}