#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n, t = 1;
    while(cin >> n){
        int no = 0; // total no. of elements
        for(int i=1; i<=n; i++){
            no += i;
        }
        no++;

        if(no == 1){
            printf("Caso %d: %d numero\n", t, no);
            cout << "0\n\n";
        }else{
            printf("Caso %d: %d numeros\n", t, no);
            cout << "0";

            for(int i=0; i<=n; i++){
                int x = i;
                while(x--){
                    cout << " " << i;
                }
            }cout << "\n\n";
        }

        t++; // test case
    }

    return 0;
}