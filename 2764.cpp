#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int dd,mm,yy;
    char slash;

    cin>>dd>>slash>>mm>>slash>>yy;

    printf("%02d",mm);
    cout<<"/";
    printf("%02d",dd);
    cout<<"/";
    printf("%02d",yy);
    cout<<endl;

    printf("%02d",yy);
    cout<<"/";
    printf("%02d",mm);
    cout<<"/";
    printf("%02d",dd);
    cout<<endl;

    printf("%02d",dd);
    cout<<"-";
    printf("%02d",mm);
    cout<<"-";
    printf("%02d",yy);
    cout<<endl;

    
    return 0;
}

