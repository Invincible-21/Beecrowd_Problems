#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int highest = 0, pos;
    for (int i = 1; i <= 100; i++)
    {
        cin >> num;
        if (num > highest)
        {
            pos = i;
            highest = num;
        }
    }
    cout << highest << endl;
    cout << pos << endl;

    return 0;
}