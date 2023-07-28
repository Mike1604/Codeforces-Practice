/*
https://codeforces.com/contest/152/problem/B
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

lli n,m;


int main(){_
    lli n, m; cin>>n>>m;
    lli x, y; cin>>x>>y; x, y;
    lli k; cin>>k;
    vector<ii> cords;
    lli ans=0;
    fore(i,0,k){
        lli a,b; cin>>a>>b;
        lli l,r; l=0, r=1e9;
        while(r>l+1){
            lli mid = (l+r)/2;
            lli auxx = x + (mid*a);
            lli auxy = y + (mid*b);
            if((auxx <= n) && (auxx >=1) && (auxy <= m) && (auxy >= 1)){
                l=mid;
            }else{
                r=mid;
            }
        }
        x = x + (l*a);
        y = y + (l*b);
        ans+=l;
    }
    cout<<ans<<ENDL;

    return 0;
}
