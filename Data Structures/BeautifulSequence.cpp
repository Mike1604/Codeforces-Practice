/*
https://codeforces.com/contest/1810/problem/A
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: Everybody♫
                CREATOR: Mac Miller™®
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

void solve(){
    lli n; cin>>n;
    vi nums(n);
    bool f=false;
    fore(i,0,n){
        cin>>nums[i];
    }
    lli i=1;
    for(auto e:nums){if(e <= (i)){ f=true; break;} i++;}
    if(f){yes;}
    else{nop;}
}

int main(){_
    lli t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
