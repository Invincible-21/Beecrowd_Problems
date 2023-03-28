#include<bits/stdc++.h>
using namespace std;

int main(){

    double n; cin>>n;
    int n100,n50,n20,n10,n5,n2;
    int m1,m50,m25,m10,m05,m01;

    int note = n;
    int poisa = (n-note)*100;

    if((poisa * 1000) % 10 ==9){
        poisa++;
    }

    n100 = note/100;
    note = note%100;
    n50  = note/50;
    note = note%50;
    n20  = note/20;
    note = note%20;
    n10  = note/10;
    note = note%10;
    n5   = note/5;
    note = note%5;
    n2   = note/2;
    note = note%2;

    m1 = note/1;
    note = note%1;
    m50 = poisa/50;
    poisa = poisa%50;
    m25 = poisa/25;
    poisa = poisa%25;
    m10 = poisa/10;
    poisa = poisa%10;
    m05 = poisa/5;
    poisa = poisa%5;
    m01 = poisa/1;


    cout<<"NOTAS:\n";
    cout<<n100<<" nota(s) de R$ 100.00\n";
    cout<<n50<<" nota(s) de R$ 50.00\n";
    cout<<n20<<" nota(s) de R$ 20.00\n";
    cout<<n10<<" nota(s) de R$ 10.00\n";
    cout<<n5<<" nota(s) de R$ 5.00\n";
    cout<<n2<<" nota(s) de R$ 2.00\n";

    cout<<"MOEDAS:\n";
    cout<<m1<<" moeda(s) de R$ 1.00\n";
    cout<<m50<<" moeda(s) de R$ 0.50\n";
    cout<<m25<<" moeda(s) de R$ 0.20\n";
    cout<<m10<<" moeda(s) de R$ 0.10\n";
    cout<<m50<<" moeda(s) de R$ 0.05\n";
    cout<<m01<<" moeda(s) de R$ 0.01\n";


    return 0;
}

