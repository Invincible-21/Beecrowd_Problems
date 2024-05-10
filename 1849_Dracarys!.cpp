#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int side = min(max(a,b), max(c,d));

    int area = side*side;

    cout << area << '\n';

    return 0;
}