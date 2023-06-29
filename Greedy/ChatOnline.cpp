/*

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
    lli p,l,q,r; cin>>p>>l>>q>>r;
    vector<pair<lli,lli>> x;
    vector<pair<lli,lli>> y;
    fore(i,0,p){
        lli a,b; cin>>a>>b;
        x.push_back({a,b});
    }
    fore(i,0,l){
        lli a,b; cin>>a>>b;
        y.push_back({a,b});
    }
    int ans=0;
    while(q<=r){
        bool flag=false;
        for(auto xs:x){
            for(auto ys:y){
                if(ys.s+q < xs.f){
                    continue;;
                }
                if (ys.f + q <= xs.s) {
                    flag = true;
                    break;
                }
            }
            if(flag){ans++; break;}
        }
        q++;
    }
    cout<<ans<<ENDL;
    return 0;
}
