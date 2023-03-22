/*
https://codeforces.com/contest/810/problem/B
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

bool cmp(const vector<lli>& a, const vector<lli>& b) {
    lli sell_a = min(a[0]*2, a[1]) - min(a[0], a[1]);
    lli sell_b = min(b[0]*2, b[1]) - min(b[0], b[1]);
    return sell_a > sell_b;
}
int main(){_
    lli n,m; cin>>n>>m;
    vector<vector<lli>> nums;
    fore(i,0,n){
        lli a,b; cin>>a>>b;
        nums.push_back({a,b});
    }
    sort(all(nums), cmp);
    lli ans=0;
    for(int i=0; i<n; i++){
        if(i<m){
            ans+=min(nums[i][0]*2, nums[i][1]);;
        }
        else{
            ans+=min(nums[i][0], nums[i][1]);
        }
    }
    cout<<ans<<ENDL;
    return 0;
}
