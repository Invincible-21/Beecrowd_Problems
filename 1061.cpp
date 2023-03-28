#include<bits/stdc++.h>
using namespace std;

int main(){
    string dia1; cin>>dia1;
    int day1; cin>>day1;
    int hour1; cin>>hour1;
    string s1; cin>>s1;
    int minute1; cin>>minute1;
    string s2; cin>>s2;
    int second1; cin>>second1;

    string dia2; cin>>dia2;
    int day2; cin>>day2;
    int hour2; cin>>hour2;
    string s3; cin>>s3;
    int minute2; cin>>minute2;
    string s4; cin>>s4;
    int second2; cin>>second2;

    int day = day2 - day1;
    int hour = hour2 - hour1;
    int minute = minute2 - minute1;
    int second = second2 - second1;

    if(second < 0){
        second += 60;
        minute--;
    }

    if(minute < 0){
        minute += 60;
        hour--;
    }

    if(hour < 0){
        hour += 24;
        day--;
    }

    cout<<day<<" dia(s)"<<endl;
    cout<<hour<<" hora(s)"<<endl;
    cout<<minute<<" minuto(s)"<<endl;
    cout<<second<<" segundo(s)"<<endl;

    return 0;

}