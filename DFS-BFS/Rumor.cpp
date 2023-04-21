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

vector<vector<int>> G; 
vector<bool> visited; 
vector<lli> prices; 

void dfs(lli n, lli& aux){
    visited[n]=true;
    aux = min(aux, prices[n]);
    for(auto v:G[n]){
        if(!visited[v]){
            dfs(v, aux);
        }
    }
}
 
int main(){_
    lli n,m; cin>>n>>m;
    prices.resize(n);
    fore(i,0,n){cin>>prices[i];}
    G.resize(n);
    visited.assign(n,false);
    fore(i,0,m){
        lli a,b; cin>>a>>b; a--, b--;
        G[a].pb(b);
        G[b].pb(a);
    }
    lli ans=0;
    fore(i,0,n){
        if(!visited[i]){
            lli aux=prices[i];
            dfs(i, aux);
            ans+=aux;
        }
    }
    cout<<ans<<ENDL;
    return 0;
}