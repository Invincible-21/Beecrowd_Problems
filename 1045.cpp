#include<bits/stdc++.h>
using namespace std;

int main(){
    
    double a,b,c; cin>>a>>b>>c;

    if(a >= b+c || b>= a+c || c>= a+b) cout<<"NAO FORMA TRIANGULO\n";
    else if(a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a+b*b) cout<<"TRIANGULO RETANGULO\n";
    else if(a*a > b*b + c*c || b*b> a*a+c*c || c*c > a*a + b*b) cout<<"TRIANGULO OBTUSANGULO\n";
    else if(a*a < b*b + c*c || b*b < a*a + c*c || c*c < a*a + b*b) cout<<"TRIANGULO ACUTANGULO\n";
    if(a == b && b == c) cout<<"TRIANGULO EQUILATERO\n";
    if((((a == b) && (a!=c)) || ((b == c ) && (b!=a)) || ((c == a) && (c!=b)))) cout<<"TRIANGULO ISOSCELES\n";

    return 0;
}