#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        for (int i = 1; i < n; i++)
        {
            cout << i << " ";
        }
        cout << n << endl;
    }

    return 0;
}