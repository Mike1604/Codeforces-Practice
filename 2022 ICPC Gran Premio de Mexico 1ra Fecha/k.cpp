/*

                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: 4th Dimension♫
                CREATOR: KIDS SEE GHOSTS™®
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

vi posb;
map<lli,lli> dp;

lli solve(lli x){
    if(dp.count(x) != 0){return dp[x];}
    if(x <= 0){return abs(x);}

    lli mini = 1e9+8;
    for(auto e:posb){
        lli aux = solve(x-e);
        mini = min(mini,aux);
    }

    dp[x]=mini;
    return mini;

}


int main(){_
    lli n,k; cin>>n>>k;
    posb.resize(k,0);
    fore(i,0,k){cin>>posb[i];}
    sort(all(posb));
    while(n--){
        lli x; cin>>x;
        cout<<solve(x)<<ENDL;;
    }
    return 0;
}
