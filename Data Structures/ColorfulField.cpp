/*

                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: Everybody♫
                CREATOR: Mac Miller™®
                0:35 ━❍──────── -3:56
                ↻     ⊲  Ⅱ  ⊳     ↺
                   
*/
//g++ -std=c++17 a.cpp && a < in.txt > out.txt
#include<bits/stdc++.h>
#define fore(i,a,b) for(int i=(a), FINALD=(b); i<FINALD; ++i)
#define ENDL '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(s) int(s.size())
#define all(s) s.begin(), s.end()
#define yes cout<<"YES"<<ENDL;
#define nop cout<<"NO"<<ENDL;
using namespace std;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef pair<int, int> pi;
typedef vector<lli> vi;

int main(){_
    lli n,m,k,t; cin>>n>>m>>k>>t;
    map<pair<lli,lli>, string> field;
    fore(i,0,k){
        lli a, b; cin>>a>>b;
        field[{a,b}]="Waste";
    }
    while(t--){
        lli a,b;
        cin>>a>>b;
        if(field.count({a,b}) != 0){cout<<field[{a,b}]<<ENDL; continue;}
        lli i = (a-1)*m+(b-1), j=0;
        for (auto it = field.begin(); it != field.end(); ++it) {
            auto key = it->first;
            if (key >= make_pair(a, b)) {break;}
            j++;
        } 
        int remainder = ((i-j) % 3);
        if (remainder == 0) cout << "Carrots" << ENDL;
        if (remainder == 1) cout << "Kiwis" << ENDL;
        if (remainder == 2) cout << "Grapes" << ENDL;
    }
    return 0;
}
