/*
https://codeforces.com/contest/1829/problem/C
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

const int INF = 1e9;

int main(){_
    int t; cin>>t;
    while(t--){
        map<pair<char,char>, lli> posib;
        posib[{'0','1'}]=INF;
        posib[{'1','0'}]=INF;
        posib[{'1','1'}]=INF;
        lli n; cin>>n;
        fore(i,0,n){
            lli aux; cin>>aux;
            string s; cin>>s;
            /* cout<<"act: "<<s[0]<<" "<<s[1]<<ENDL; */
            lli act = posib[{s[0],s[1]}];
            posib[{s[0],s[1]}] = min(act,aux);
        }
        lli ans=0, auxans=0;
        auxans+=posib[{'1','1'}];
        ans+=posib[{'0','1'}];
        ans+=posib[{'1','0'}];
        if(auxans==INF){
            if((posib[{'0','1'}] == INF) || (posib[{'1','0'}] == INF)){
                cout<<"-1"<<ENDL;
            }else{
                cout<<ans<<ENDL;
            }
        }else{
            if((posib[{'0','1'}] == INF) || (posib[{'1','0'}] == INF)){
                cout<<auxans<<ENDL;
            }else{
                cout<<min(auxans, ans)<<ENDL;
            }
        }
        
    }
    return 0;
}
