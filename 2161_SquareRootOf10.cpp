#include<bits/stdc++.h>
using namespace std;

int main(){
    double n; cin >> n;
    double ans = 0;

    while(n--){
        ans += 6;
        ans = 1/ans;
    }

    ans += 3;

    cout << setprecision(10) << fixed << ans << '\n';

    return 0;
}