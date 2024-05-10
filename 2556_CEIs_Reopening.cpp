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

        int median, cme;
        if(n%2 == 0){
            median = (arr[n/2 - 1] + arr[n/2]) / 2;
            cme = arr[n/2 - 1];
        }else{
            median = arr[n/2];
            cme = (arr[n/2 - 1] + arr[n/2 + 1]) / 2;
        }

        cout << cme << " " << median << '\n';
    }

    return 0;
}