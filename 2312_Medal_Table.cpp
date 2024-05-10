#include<bits/stdc++.h>
using namespace std;

struct Country{
    string name;
    int gold, silver, bronze;

    bool operator < (const Country& c) const{
        if(gold != c.gold) return gold > c.gold;
        if(silver != c.silver) return silver > c.silver;
        if(bronze != c.bronze) return bronze > c.bronze;
        return name < c.name;
    }
};

int main(){ 
    int n; cin >> n;
    vector<Country> countries(n);
    for(int i=0; i<n; i++){
        cin >> countries[i].name >> countries[i].gold >> countries[i].silver >> countries[i].bronze;
    }

    sort(countries.begin(), countries.end());

    for(const Country&c : countries){
        cout << c.name << " " << c.gold << " " << c.silver << " " << c.bronze << '\n';
    }

    return 0;
}