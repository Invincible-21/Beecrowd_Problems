#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >>a >> b >> c >> d;

    int d1 = abs(a-b);
    int d2 = abs(c-d);

    if(d1 == 0) cout << d2 << '\n';
    else if(d2 == 0) cout << d1 << '\n';
    else cout << abs(d2-d1) << '\n';

    return 0;
}