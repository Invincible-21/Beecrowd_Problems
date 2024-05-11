#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int price, paid; cin >> price >> paid;
        if(price == 0 and paid == 0) return 0;
        int pabe = paid - price;

        int arr[6] = {2,5,10,20,50,100};

        if(pabe > 100) pabe -= 100;
        else if(pabe > 50) pabe -= 50;
        else if(pabe > 20) pabe -= 20;
        else if(pabe > 10) pabe -= 10;
        else if(pabe > 5) pabe -= 5;
        else if(pabe >= 2) pabe -= 2;

        bool ck = 0;

        for(int i=5; i>=0; i--){
            if(pabe - arr[i] == 0){
                ck = 1;
            }
        }

        if(ck) cout << "possible\n";
        else cout << "impossible\n";

    }

    return 0;
}