#include<bits/stdc++.h>
using namespace std;


int main(){
    
    float n1,n2,n3,n4; cin>>n1>>n2>>n3>>n4;
    float n5;

    float media = (n1*2 + n2*3 + n3*4 + n4*1)/10;

    cout<<"Media: "; printf("%.1f\n",media);

    if(media>=7.0) printf("Aluno aprovado.\n");
    else if(media <5.0) printf("Aluno reprovado.\n");

    else if(media>=5.0 && media<=6.9){
        printf("Aluno em exame.\n");
        cin>>n5;
        cout<<"Nota do exame: "; printf("%.1lf\n",n5);

        float new_media = (media+n5)/2;

        if(new_media>=5.0) cout<<"Aluno aprovado.\n";
        else if(new_media<=4.9) cout<<"Aluno reprovado.\n";

        cout<<"Media final: "; printf("%.1f\n",new_media);


    } 
    
    
    return 0;
}

