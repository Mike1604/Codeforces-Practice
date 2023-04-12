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
    lli n,t; cin>>n>>t;
    vector<lli> graph(n-1);
    vector<bool> visite(n);
    fore(i,0,n-1){
        int a, des; cin>>a;
        des=i + a;
        graph[i]=des;
    }  
    int current=0;
    visite[0]=true;
    bool f=false;
    while(current != n-1){
        int aux=graph[current];
        if(!visite[aux]){
            if(aux==(t-1)){yes; f=true; break;}
            current=aux;
            visite[current]=true;
        }
    }
    if(!f){nop;}
    return 0;
}
