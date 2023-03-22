/*
https://codeforces.com/contest/268/problem/A
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
    lli n; cin>>n;
    vector<pair<lli,lli>> nums;
    fore(i,0,n){
        lli a,b; cin>>a>>b;
        nums.pb({a,b});
    }
    lli ans=0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i].f == nums[j].s){ans++;}
            if(nums[i].s == nums[j].f){ans++;}
        }
    }
    cout<<ans<<ENDL;
    return 0;
}
