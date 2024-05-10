#include<bits/stdc++.h>
using namespace std;

int main(){

    while(1){
        int q,d,p; cin >> q;
        if(q == 0) return 0;
        cin >> d >> p;

        int x = (q*d*p)/(p-q);

        if(x > 1) cout << x << " paginas\n";
        else cout << x << " pagina\n";
    }

    return 0;
}
