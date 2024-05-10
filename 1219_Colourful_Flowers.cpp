#include<bits/stdc++.h>
using namespace std;
const double PI = 3.1415926535897;

int main(){
    double a, b, c;
    while(cin >> a >> b >> c){
        double s = (a+b+c)/2;
        double x = s*((s-a)*(s-b)*(s-c));
        double area = sqrt(x);

        double r = area/s;
        double R = (a*b*c)/(4*area);

        double roses = PI*r*r;
        double sunflowers = (PI*R*R) - area;
        double violets = area - roses;

        cout << setprecision(4) << fixed << sunflowers << " ";
        cout << setprecision(4) << fixed << violets << " ";
        cout << setprecision(4) << fixed << roses << '\n';

    }

    return 0;
}