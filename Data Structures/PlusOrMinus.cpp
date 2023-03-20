/*
https://codeforces.com/contest/1807/problem/A
    
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: Everybody♫
                CREATOR: Mac Miller™®
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
    lli t; cin>>t;
    while(t--){
        lli a,b,c; cin >> a >> b >> c;
        if((a-b)==c){
            cout<<"-"<<ENDL;
        }
        else{cout<<"+"<<ENDL;}
    }
    return 0;
}