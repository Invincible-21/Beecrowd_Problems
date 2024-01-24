#include<bits/stdc++.h>
using namespace std;

int main(){

    int a1, b1, c1; cin >> a1 >> b1 >> c1;
    int a2, b2, c2; cin >> a2 >> b2 >> c2;

    int ans = 0;

    if(a2 > a1) ans += (a2 - a1);
    if(b2 > b1) ans += (b2 - b1);
    if(c2 > c1) ans += (c2 - c1);

    cout << ans << '\n';

    return 0;
}