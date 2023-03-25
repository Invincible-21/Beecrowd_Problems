#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c; cin>>a>>b>>c;

    int n1 = 0, n2 = 0, n3 = 0;
    if(a<b && a<c) n1 = a;
    if(b<a && b<c) n1 = b;
    if(c<a && c<b) n1 = c;

    if(a>b && a>c) n2 = a;
    if(b>a && b>c) n2 = b;
    if(c>a && c>b) n2 = c;

    if(a>n1 && a<n2) n3 = a;
    if(b>n1 && b<n2) n3 = b;
    if(c>n1 && c<n2) n3 = c;

    cout<<n1<<endl<<n3<<endl<<n2<<endl;
    cout<<"\n";
    cout<<a<<endl<<b<<endl<<c<<endl;

    return 0;
}