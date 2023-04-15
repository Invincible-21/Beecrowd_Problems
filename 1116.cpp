#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x, y;
        cin >> x >> y;
        if (x != 0 && y != 0)
        {
            float div = x / y;
            printf("%.1f\n", div);
        }
        else if (y == 0)
        {
            printf("divisao impossivel\n");
        }
        else if (x == 0)
        {
            printf("0.0\n");
        }
    }

    return 0;
}