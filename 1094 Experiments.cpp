#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    double total = 0, rabbit = 0, rat = 0, frog = 0;
    double p_rabbit, p_rat, p_frog;

    while(t--){
        int n; char c;
        cin >> n >> c;
        total += n;
        if(c == 'C') rabbit += n;
        if(c == 'S') frog += n;
        if(c == 'R') rat += n;
    }

    p_rabbit = (100*rabbit)/total;
    p_rat = (100*rat)/total;
    p_frog = (100*frog)/total;

    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << rabbit << '\n';
    cout << "Total de ratos: " << rat << '\n';
    cout << "Total de sapos: " << frog << '\n';

    printf("Percentual de coelhos: %.2lf %\n", p_rabbit);
    printf("Percentual de ratos: %.2lf %\n", p_rat);
    printf("Percentual de sapos: %.2lf %\n", p_frog);

    return 0;
}