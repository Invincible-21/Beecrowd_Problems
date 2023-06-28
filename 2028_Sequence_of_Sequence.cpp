#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int pp(int tt){
    int i,j,ct=1;
    for(i=0; i<=tt; i++){
        for(j=i-1; j>=0; j--){
            ct++;
        }
    }
    return ct;
}

int main()
{
    int n, cnt = 0;
    while(scanf("%d",&n)!=EOF){
       cnt++;
       if(n==0) cout<<"Caso "<<cnt<<": 1 numero\n";
       else cout<<"Caso "<<cnt<<": "<<pp(n)<<" numeros\n";
       cout<<"0";

       for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++) printf(" %d",i);
       }
       printf("\n\n");
    }

    return 0;
}

