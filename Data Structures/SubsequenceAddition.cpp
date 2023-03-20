/*
https://codeforces.com/contest/1807/problem/G1    
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

int main(){_
    lli t; cin>>t;
    vector<string>ans;
    while(t--){
        lli n; cin>>n;
        vector<lli>nums (n,0);
        fore(i,0,n){cin>>nums[i];}
        sort(nums.begin(), nums.end());
        if(nums[0]!=1){ans.push_back("NO"); continue;}
        vector<lli>pos(n,0);
        pos[0]=1;
        bool f=true;
        for(int i=1;i<n; i++){
            if(nums[i]<= pos[i-1]){
                pos[i]=pos[i-1]+nums[i];
            }
            else{nop; f=false; break;}
        }
        if(f){yes;}
    }
    return 0;
}
