#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[101];
    for(int i=1; i<=n; i++){
        cin>>x[i];
    }
    int min = 1;
    for(int i=1; i<=n; i++){
        if(x[min]>x[i]){
            min = i;
        }
    }
    cout<<min<<endl;

    return 0;
}

