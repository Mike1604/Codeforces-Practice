/*
https://codeforces.com/contest/363/problem/B
                ╔════════════════╗
                ┃ ▁▂▃▅▆▇ 100% |
                ╚════════════════╝
                SONG: Count Me Out♫
                CREATOR: Kendrick Lamar™®
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
    lli n,r; cin>>n>>r;
    vector<lli> nums(n,0);
    fore(i,0,n){cin>>nums[i];}
    vector<lli> pref(n+1,0);
    pref[0]=0;
    fore(i,1,n+1){pref[i]=pref[i-1]+nums[i-1];}
    lli i=1,j=r, ans=0, aux=pref[n];
    while(j<=n){
        lli aux2=pref[j]-pref[i-1];
        if(aux2<=aux){ans=i;aux=aux2;}
        j++;
        i++;
    }
    cout<<ans<<ENDL;
    return 0;
}
