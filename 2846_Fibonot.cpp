#include<bits/stdc++.h>

#define ture 1
#define false 0
#define MAXSIZE 100100
using namespace std;

long long fibo[MAXSIZE];
long long fibonot[MAXSIZE];

void fib(){
    int i,j,k;
    fibo[0] = 0; fibo[1] = 1;
    for(i=2; i<=MAXSIZE; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    for(i=1, j=2, k=1; i<=MAXSIZE; i++){
        if(fibo[j]!=i){
            fibonot[k++] = i;
        }else j++;
    }
}

int main(){
    int n; cin>>n;
    fib();
    cout<<fibonot[n]<<endl;

    return 0;
}




