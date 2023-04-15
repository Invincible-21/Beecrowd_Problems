#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;

    while (1)
    {
        cin >> m >> n;
        if (m <= 0 || n <= 0)
            break;

        if (m > n)
        {
            int sum = 0;
            for (int i = n; i <= m; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "Sum=" << sum << endl;
        }
        else if (n > m)
        {
            int sum = 0;
            for (int i = m; i <= n; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "Sum=" << sum << endl;
        }
    }

    return 0;
}