#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    while(cin >> n){
        double h, c, l; cin >> h >> c >> l;
        double x = sqrt(pow(h, 2) + pow(c, 2));
        double ab = x * l;
        double area = ab * n;
        
        double ans = area / 10000; // sq cm to sq m
        printf("%.4lf\n", ans);
        }

    return 0;
}
