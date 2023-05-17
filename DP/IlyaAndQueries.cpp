/*
https://codeforces.com/problemset/problem/313/B
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

int main(){_
    string s; cin>>s;
    lli m; cin>>m;
    vi prefixes ((s.length()),0);
    prefixes[0]=0;
    char last=s[0];
    fore(i,1,s.length()){
        if(last==s[i]){
            prefixes[i] = prefixes[i-1] + 1;
        }else{
            prefixes[i] = prefixes[i-1];
            last=s[i];
        }
    }
    /* int i=1;
    for(auto e:prefixes){
        cout<<"i: "<<i<<" "<<e<<ENDL;
        i++;
    } */
    fore(i,0,m){
        lli l,r; cin>>l>>r; l--; r--;
        cout<<prefixes[r]-prefixes[l]<<ENDL;
    }
    return 0;
}
