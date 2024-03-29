/*
https://codeforces.com/contest/294/problem/A
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
    int n; cin>>n;
    vi nums(n,0);
    fore(i,0,n){cin>>nums[i];}
    int m; cin>>m;
    fore(i,0,m){
        int x,y; cin>>x>>y; x--, y;
        if((x-1) >= 0){
            nums[x-1]=nums[x-1]+(y-1);
        }
        if((x+1) < n){
            nums[x+1]=nums[x+1]+(nums[x]-y);
        }
        nums[x]=0;
    }
    for(auto e:nums){
        cout<<e<<ENDL;
    }
    return 0;
}
