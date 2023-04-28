/*
https://codeforces.com/contest/189/problem/A
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



map<int,int> dp;
int ans=0;
int a;

lli solve(int n, int min, vector<int> opc){
    if (dp.count(n) !=0){ return dp[n];}
    if (n==0)   return 0;
    if (n<min){return -1;};
    int aux=-1;
    for(auto e:opc){
        int aux2=solve((n-e), min, opc);
        aux=max(aux2,aux);
    }
    int ans=aux;
    if(aux>=0){ans++;}
    dp[n]=ans;
    return ans;
}

int main(){_
    int n; cin>>n;
    vector<int> opc (3);
    fore(i,0,3){cin>>opc[i];}
    auto it = min_element(opc.begin(), opc.end());
    int min=*it;
    ans = solve(n, min, opc);
    cout<<ans<<ENDL;
    return 0;
}
