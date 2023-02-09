#include<bits/stdc++.h>
using namespace std;

int main(){

    int y; cin>>y;

    int yy = y/365;
    int rem1 = y%365;

    int mm = rem1/30;
    int rem2 = rem1%30;

    cout<<yy<<" ano(s)"<<endl;
    cout<<mm<<" mes(es)"<<endl;
    cout<<rem2<<" dia(s)"<<endl;

    return 0;
}