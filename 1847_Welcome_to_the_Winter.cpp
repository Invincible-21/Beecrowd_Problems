#include<bits/stdc++.h>
using namespace std;


int main(){
    int a, b, c; cin >> a >> b >> c;

    if(a > b && (c > b || c == b)) cout << ":)\n";
    else if(b > a && (c < b || b == c)) cout << ":(\n";
    else if(b > a && c > b && abs(b-a) > abs(c-b)) cout << ":(\n";
    else if(b > a && c > b && abs(b-a) <= abs(c-b)) cout << ":)\n";
    else if(b < a && c < b && abs(b-a) > abs(c-b)) cout << ":)\n";
    else if(b < a && c < b && abs(b-a) <= abs(c-b)) cout << ":(\n";
    else{
        if(a == b && c > b) cout << ":)\n";
        else cout << ":(\n";
    }

    return 0;
}