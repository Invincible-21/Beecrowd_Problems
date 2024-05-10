#include<bits/stdc++.h>
using namespace std;

int main(){
    double sum_service_T = 0.0;
    double sum_blocks_T = 0.0;
    double sum_attacks_T = 0.0;

    double sum_service_S = 0.0;
    double sum_blocks_S = 0.0;
    double sum_attacks_S = 0.0;

    int n; cin >> n;
    while(n--){
        string s; cin >> s;

        int a, b, c; cin >> a >> b >> c;
        sum_service_T += a;
        sum_blocks_T += b;
        sum_attacks_T += c;

        int x, y, z; cin >> x >> y >> z;
        sum_service_S += x;
        sum_blocks_S += y;
        sum_attacks_S += z;     
    }

    double ss = (100*sum_service_S)/sum_service_T;
    double bb = (100*sum_blocks_S) /sum_blocks_T;
    double aa = (100*sum_attacks_S)/sum_attacks_T; 

    printf("Pontos de Saque: %.2lf %%.\n", ss);
    printf("Pontos de Bloqueio: %.2lf %%.\n", bb);
    printf("Pontos de Ataque: %.2lf %%.\n", aa);

    return 0;
}