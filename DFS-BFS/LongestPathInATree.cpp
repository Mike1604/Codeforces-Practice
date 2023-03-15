#include<bits/stdc++.h>
#define fore(i,a,b) for(int i=(a), FINALD=(b); i<FINALD; ++i)
#define ENDL '\n'
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(s) int(s.size())
#define all(s) s.begin(), s.end()
using namespace std;

typedef long long lli;

const lli N = 1e4;
vector<lli> g[N];
lli dis[N];
lli n;

void dfs(lli u, lli d=0, lli pr = -1){
    dis[u] = d;
    for(auto v:g[u]){
        if(v != pr){
            dfs(v, d+1, u);
        }
    }
}

int main(){
    cin>>n;
    for(int i=0; i<n-1; i++){
        lli u,v; cin>>u>>v; u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(0);
    lli a=0;
    fore(i,1,n) if(dis[i] > dis[a]) a=i;
    dfs(a);
    lli b=0;
    fore(i,1,n){if(dis[i] > dis[b]){b=i;}} 
    cout<<dis[b]<<ENDL;
    return 0;
}