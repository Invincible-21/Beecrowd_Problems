#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t; cin >> t;
    int n = t;
    int i = 1;
    double kgbyday = 0.0;
    double r_sum = 0.0;
    while(t--){
        double x; cin >> x;
        r_sum += x;

        cin.ignore();
        string s;
        getline(cin, s);

        stringstream dd(s);
        string word;
        int folcnt = 0;
        while(dd >> word){
            folcnt++;
        }
        kgbyday += folcnt;

        cout << "day " << i <<": "<< folcnt <<" kg\n";
        i++;

     }

     kgbyday = kgbyday / n;
     printf("%.2lf kg by day\n", kgbyday);

     r_sum = r_sum / n;
     printf("R$ %.2lf by day\n", r_sum);

    return 0;
}