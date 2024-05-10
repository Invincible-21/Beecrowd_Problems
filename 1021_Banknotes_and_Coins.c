#include<bits/stdc++.h>
using namespace std;

int main(){
    double n; cin >> n;

    int taka = n;
    int poisa = (n - taka) * 100;

    int n100 = taka / 100;
    taka %= 100;
    int n50 = taka / 50;
    taka %= 50;
    int n20 = taka / 20;
    taka %= 20;
    int n10 = taka / 10;
    taka %= 10;
    int n5 = taka / 5;
    taka %= 5;
    int n2 = taka / 2;
    taka %= 2;

    int p1 = taka / 1;
    int p50 = poisa / 50;
    poisa %= 50;
    int p25 = poisa / 25;
    poisa %= 25;
    int p10 = poisa / 10;
    poisa %= 10;
    int p5 = poisa / 5;
    poisa %= 5;
    int p01 = poisa / 1;

    cout << "NOTAS:\n";
    cout << n100 << " nota(s) de R$ 100.00\n";
    cout << n50 << " nota(s) de R$ 50.00\n";
    cout << n20 << " nota(s) de R$ 20.00\n";
    cout << n10 << " nota(s) de R$ 10.00\n";
    cout << n5 << " nota(s) de R$ 5.00\n";
    cout << n2 << " nota(s) de R$ 2.00\n";


    cout << "MOEDAS:\n";
    cout << p1 << " moeda(s) de R$ 1.00\n";
    cout << p50 << " moeda(s) de R$ 0.50\n";
    cout << p25 << " moeda(s) de R$ 0.25\n";
    cout << p10 << " moeda(s) de R$ 0.10\n";
    cout << p5 << " moeda(s) de R$ 0.05\n";
    cout << p01 << " moeda(s) de R$ 0.01\n";


    return 0;
}