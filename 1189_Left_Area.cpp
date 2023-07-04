#include<bits/stdc++.h>
using namespace std;

int main(){ // ** TLE 

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    float n[12][12];
    float soma = 0.0;
    
    char o; cin>>o;

    for(int i=0; i<12; i++){
        for(int j=0; i<12; j++){
            cin>>n[i][j];

            if(j<(11-i) && j<i){
                soma += n[i][j];
            }
        }
        
    }

    if(o=='S') printf("%.1f\n", soma);
    else printf("%.1f\n", soma/30.0);

    return 0;
}

