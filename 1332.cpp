#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--){
        char s[6];

        cin >> s;
        if (strlen(s) == 5)
        // This line checks if the string has 5 characters.
        {
            cout << "3\n";
        }
        else if ((s[0] == 't' && s[1] == 'w') || (s[0] == 't' && s[2] == 'o') || (s[1] == 'w' && s[2] == 'o'))
         // This line checks if the string contains the substring "tw" or "to" or "wo".
        {
            cout << "2\n";
        }
        else
        {
            cout << "1\n";
        }
         // This line prints the number 1 if the string does not contain the substring "tw" or "to" or "wo".
    }

    return 0;
}