/*
https://codeforces.com/contest/1807/problem/D    
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
    vector<string>ans;
    vector<lli>sum;
    while(t--){
        lli n,m; cin>>n>>m;
        vector<lli>nums(n);
        fore(i,0,n){
            cin>>nums[i];
        }
        vector<lli> pre(n+1);
        pre[0]=0;
        fore(i,1,n+1){
            pre[i]=pre[i-1]+nums[i-1];
        }
        fore(i,0,m){
            lli l,r,k; cin>>l>>r>>k;
            lli aux=0;
            aux+=pre[l-1]-pre[0];
            aux+=pre[n]-pre[r];
            aux+=k*((r-l)+1);
            if((aux%2)==0){ans.push_back("NO");}
            else{ans.push_back("YES");}
        }
    }
    for(auto e:ans){cout<<e<<ENDL;}
    return 0;
}