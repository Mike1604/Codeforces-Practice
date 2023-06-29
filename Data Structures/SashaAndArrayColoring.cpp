/*
https://codeforces.com/contest/1843/problem/A
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

void solve(){
    lli n; cin>>n;
    vi nums(n,0);
    fore(i,0,n){cin>>nums[i];}
    sort(all(nums));
    lli l=0, r=nums.size()-1, ans=0;
    while(l<r){
        ans+=nums[r]-nums[l];
        l++;
        r--;
    }
    cout<<ans<<ENDL;
}


int main(){_
    lli t; cin>>t;
    while(t--){solve();}
    return 0;
}
