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

lli n, m; 
set<lli> visited;
queue<pair<lli,lli>> graph;

void bfs(lli b){
    if(b==m) {cout<<0<<ENDL; return;}
    visited.insert(b);
    graph.push({b,0});
    while(!graph.empty()){
        auto aux = graph.front();
        cout<<"Node: "<<aux.f<<ENDL;
        graph.pop();
        if(aux.f == m){cout<<aux.s<<ENDL; return; break;}
        if(aux.f - 1 > 0 && visited.count(aux.f-1)==0){
            visited.insert(aux.f-1);
            graph.push({aux.f-1,aux.s+1});
        }
        if(aux.f * 2 <= 10000 && visited.count(aux.f*2)==0){
            visited.insert(aux.f*2);
            graph.push({aux.f*2,aux.s+1});
        }
        
    }
}

int main(){_
    cin>>n>>m;
    bfs(n);
    return 0;
}

