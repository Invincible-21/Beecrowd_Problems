#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, k;
    while(scanf("%d",&n) != EOF){
        for(i=0; i<n; i+=2){
            for(j=0; i<(n-i)/2; j++) cout<<" ";
            for(k=i; k>=0; k--) cout<<"*";
            cout<<"\n";
        }
        for(i=0; i<n/2; i++) cout<<" ";
        cout<<"*"<<endl;
        for(i=1; i<n/2; i++) cout<<" ";
        cout<<"***"<<endl;
    }

    return 0;
}
