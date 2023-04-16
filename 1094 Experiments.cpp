#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    float total = 0.00;
    double r = 0, c = 0, s = 0;
    while(t--){
        double n; char ch;
        cin>> n >> ch;

        total += n;

        if(ch=='C') c+=n;
        if(ch=='S') s+=n;
        if(ch=='R') r+=n;

    }
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;

    double pc = (c*100)/total;
    double pr = (r*100)/total;
    double ps = (s*100)/total;

    cout<<"Percentual de coelhos: ";printf("%.2lf",pc); cout<<" %"<<endl;
    cout<<"Percentual de ratos: ";printf("%.2lf",pr); cout<<" %"<<endl;
    cout<<"Percentual de sapos: ";printf("%.2lf",ps); cout<<" %"<<endl;

    return 0;
}

