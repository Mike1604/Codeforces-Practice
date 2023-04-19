/*
https://codeforces.com/problemset/problem/1020/B
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

vector<lli> graph(1000);
vector<lli> vist(1000);

void dfs(lli&  a){
    if(vist[a] == 1){cout<<a+1; return;}
    else{
        vist[a]=1;
        dfs(graph[a]);
    }
}

int main(){_
    lli n; cin>>n;
    fore(i,0,n){
        lli a; cin>>a; a--;
        graph[i] = a;
    }
    for(int i=0; i<n; i++){
        fill(vist.begin(), vist.end(), 0);
        vist[i]=1;
        dfs(graph[i]);
        cout<<" ";
    }
    cout<<ENDL;
    return 0;
}
