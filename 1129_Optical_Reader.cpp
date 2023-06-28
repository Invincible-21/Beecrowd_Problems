#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    while(n!=0){
        cin>>n;
        for(int i=0; i<n; i++){
            int a,b,c,d,e,tc=0;
            cin>>a>>b>>c>>d>>e;

            if(a<=127){
                tc++;
                a=1;
            }else{
                a=0;
            }

            if(b<=127){
                tc++;
                b=1;
            }else{
                b=0;
            }

            if(c<=127){
                tc++;
                c=1;
            }else{
                c=0;
            }

            if(d<=127){
                tc++;
                d=1;
            }else{
                d=0;
            }

            if(e<=127){
                tc++;
                e=1;
            }else{
                e=0;
            }

            if(tc==1){
                if(a==1) cout<<"A\n";
                if(b==1) cout<<"B\n";
                if(c==1) cout<<"C\n";
                if(d==1) cout<<"D\n";
                if(e==1) cout<<"E\n";
            }else{
                cout<<"*\n";
            }
        }
    }

    return 0;
}

