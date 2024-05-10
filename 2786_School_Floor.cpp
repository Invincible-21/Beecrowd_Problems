#include<bits/stdc++.h>
using namespace std;

int main(){
    int w, l; cin >> w >> l;
    int t1 = (w*l) + ((w-1)*(l-1));
    int t2 = (w-1)*2 + (l-1)*2;

    cout << t1 << '\n' << t2 << '\n';

    return 0;
}