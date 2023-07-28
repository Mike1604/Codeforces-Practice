/*
https://codeforces.com/problemset/problem/1475/B
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

const lli maxi = 1e7;
vector<bool> dp(maxi,0);

void solve(){
    dp[2020]=true;
    dp[2021]=true;
    fore(i,202,maxi){
        if(dp[i]){
            if(i+2020 <= maxi){dp[i+2020]=true;}
            if(i+2021 <= maxi){dp[i+2021]=true;}
        }
    }
}

int main(){_
    solve();
    lli t; cin>>t;
    while(t--){
        lli n; cin>>n;
        if(dp[n]){
            yes;
        }
        else nop;
    }
    return 0;
}
