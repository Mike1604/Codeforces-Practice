/*
https://codeforces.com/problemset/problem/489/B
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
    lli n, m; cin>>n;
    vi numsx(n);
    fore(i,0,n){cin>>numsx[i];}
    cin>>m;
    vi numsy(m);
    fore(i,0,m){cin>>numsy[i];}

    sort(all(numsx));
    sort(all(numsy));

    lli i=0, j=0, ans=0;
    while((i<n) && (j<m)){
        lli r=numsx[i]+1, l=numsx[i]-1;
        if((numsy[j] >= l) && (numsy[j] <= r)){/* cout<<numsx[i]<<" "<<numsy[j]<<ENDL; */ans++; i++; j++;}
        else if(r < numsy[j]){i++;}
        else if(l > numsy[j]){j++;}
    }
    cout<<ans<<ENDL;
    return 0;
}
