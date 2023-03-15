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
vector<pair<lli,lli>> g[N];
lli dis[N];
lli n;

void dfs(lli u, lli inicio,lli d=0, lli pr = -1){
    if(d>dis[inicio]){dis[inicio] = d;}
    for(auto v:g[u]){
        if(v.first != pr){
            dfs(v.first, inicio, d+v.second, u);
        }
    }
}

int main(){
    lli t; cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n-1; i++){
            lli u,v,w; cin>>u>>v>>w; u--, v--;
            g[u].push_back({v,w});
            g[v].push_back({u,w});
        }
        fore(i,0,n){
            dfs(i,i);
            cout<<dis[i]<<" ";   
        }
        cout<<ENDL;
    }
    return 0;
}