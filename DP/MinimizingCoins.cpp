/*
https://cses.fi/problemset/task/1634
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
    int n; cin>>n; lli x; cin>>x;
    vi opc(n,0);
    fore(i,0,n){cin>>opc[i];}
    vi tab((x+1),-1);
    tab[0]=0;
    fore(i,0,x){
        if(tab[i]!=-1){
            for(auto e:opc){
                if((e+i) <= x){
                    if((tab[i+e] > (tab[i]+1) ) || (tab[e+i] == -1)){
                        tab[i+e]= tab[i]+1;
                    }
                }
            }
        }
    }
    cout<<tab[x]<<ENDL;
    return 0;
}
