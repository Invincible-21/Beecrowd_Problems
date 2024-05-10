#include<bits/stdc++.h>
using namespace std;

int main(){
    double old, nw; cin >> old >> nw;

    double ans = ((100*nw)/old) - 100;

    cout << fixed << setprecision(2) << ans << '%' << '\n';


    return 0;
}