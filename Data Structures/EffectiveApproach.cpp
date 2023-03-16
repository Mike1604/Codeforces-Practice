/*
https://codeforces.com/contest/227/problem/B
    
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: Chanel♫
                CREATOR: Frank Ocean™®
                0:35 ━❍──────── -3:56
                ↻     ⊲  Ⅱ  ⊳     ↺
                   
*/
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

int main(){
    lli n, t, aux; cin>>n;
    map<lli,lli>index;
    fore(i,0,n){
        cin>>aux;
        index[aux]=i+1;
    }
    cin>>t;
    lli ansi=0, ansj=0;
    while(t--){
        lli q;
        cin>>q;
        ansi+=index[q];
        ansj+=n-(index[q]-1);
    }
    cout<<ansi<<" "<<ansj<<ENDL;
}