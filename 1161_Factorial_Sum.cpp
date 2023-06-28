#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll m,n;
    while(scanf("%lld %lld",&m,&n)!=EOF){
        ll f1=1, f2=1;
        for(int i=m; i>0; i--) f1 *=i;
        for(int i=n; i>0; i--) f2 *=i;

        cout<<f1+f2<<endl;
    }
    
    return 0;
}