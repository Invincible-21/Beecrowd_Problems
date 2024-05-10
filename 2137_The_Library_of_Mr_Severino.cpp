#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; 
    while(cin >> n){
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr, arr+n);

        for(int i=0; i<n; i++){
            int x = arr[i];
            if(x < 1000 && x >=100){
                cout << '0';
            }
            if(x < 100 && x >=10){
                cout << "00";
            }
            if(x < 10){
                cout << "000";
            }
            cout << x << '\n';
        }
    }

    return 0;
}