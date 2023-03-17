/*
https://codeforces.com/contest/1791/problem/D
    
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: Cracker Island♫
                CREATOR: Gorillaz™®
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
    vector<lli> nums;
    while(t--){
        lli n; cin>>n;
        string s; cin>>s;
        set<char> sol;
        vector<lli> prefix(n);
        vector<lli> sufix(n);
        fore(i,0,n){
            sol.insert(s[i]);
            prefix[i] = sol.size();
        }
        sol.clear();
        for(int i=n-1; i>=0; i--){
            sol.insert(s[i]);
            sufix[i] = sol.size();
        }
        lli ans=0;
        fore(i,0,n-1){
            ans= max(ans, (prefix[i]+sufix[i+1]));
        }
        nums.push_back(ans);
    }
    for(auto e:nums){cout<<e<<ENDL;}
    return 0;
}