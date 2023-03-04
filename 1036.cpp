#include<bits/stdc++.h>
using namespace std;

int main(){
    
    double a,b,c; cin>>a>>b>>c;
    if(a==0 || ((b*b)-(4*a*c)) < 0){
        cout<<"Impossivel calcular"<<endl;
    }else{
        double rr1 = (-b + sqrt((b*b)-(4*a*c)))/(2*a);
        double rr2 = (-b - sqrt((b*b)-(4*a*c)))/(2*a);

        printf("R1 = %.5lf\n",rr1);
        printf("R2 = %.5lf\n",rr2);

    }
    
    return 0;
}

