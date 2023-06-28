#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll n,m;
    while(scanf("%lld %lld",&n,&m)!=EOF){
         ll fact1 = 1;
         ll fact2 = 1;

         for(int i=m; i>0; i--){
            fact1 *= i;
         }
         for(int i=n; i>0; i--){
            fact2 *= i;
         }
         cout<<fact1+fact2<<endl;
    }

    return 0;
}


