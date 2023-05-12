/*
https://cses.fi/problemset/task/1633
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
 
map<lli,lli> dp;
 
lli solve(int n){
    if(dp.count(n) !=0) return dp[n];
    if(n==0) return 1; 
    if(n<0) return -1;
 
    lli ans=0;
 
    fore(i,1,7){
        int aux=solve(n-i);
        if(aux !=-1 ){ans+=aux;}
    }
    dp[n]=ans;
    return ans;
}
 
 
int main(){_
    int n; cin>>n;
    cout<<solve(n)%1000000007<<ENDL;;
    return 0;
}