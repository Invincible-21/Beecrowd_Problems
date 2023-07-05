#include<bits/stdc++.h>
using namespace std;

int main(){
    char s1[25],s2[25];
    unsigned short i,j,t1,t2;

    scanf("%s %s",s1,s2);

    // Compare the strings using the `strcmp()` function.
    if(strcmp(s1,s2)>0){
        printf("%s\n",s2);
        printf("%s\n",s1);
    }
    else if(strcmp(s1,s2)<0){
        printf("%s\n",s1);
        printf("%s\n",s2);
    }

    return 0;
}