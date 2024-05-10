#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    int n = 1;
    while(t--){
        cout << "Instancia " << n << '\n';
        
        int matrix[9][9];
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                cin >> matrix[i][j];
            }
        }

        set<int>s;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                int x = matrix[i][j];
                s.insert(x);
            }
            if(s.size() < 9){
                cout << "NAO\n\n";
                return 0;
            }
        }

        if(s.size() == 9) cout << "SIM\n\n";
        else cout << "NAO\n\n";        

        n++;
    }

    return 0;
}