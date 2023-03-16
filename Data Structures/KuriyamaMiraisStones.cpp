/*
https://codeforces.com/contest/227/problem/B
    
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: Die for you♫
                CREATOR: The weeknd™®
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
    lli n; cin>>n;
    vector<lli> nums(n,0);
    fore(i,0,n){
        cin>>nums[i];
    }

    vector<lli> prefix(n+1,0);
    prefix[0]=0;
    fore(i,1,n+1){
        prefix[i]=prefix[i-1]+nums[i-1];
    }

    vector<lli> prefixsort(n+1,0); 
    sort(nums.begin(), nums.end());
    prefixsort[0]=0;
    fore(i,1,n+1){
        prefixsort[i]=prefixsort[i-1]+nums[i-1];
    }
    
    lli t; cin>>t;
    vector<lli> ans;
    while(t--){
        lli opc, l,r,sol; cin>>opc>>l>>r;
        if(opc==1){
            sol=prefix[r]-prefix[l-1];
            ans.push_back(sol);
        }
        else{
            sol=prefixsort[r]-prefixsort[l-1];
            ans.push_back(sol);
        }
    }

    for(auto e:ans){
        cout<<e<<ENDL;
    }
}