/*
https://cses.fi/problemset/task/1637
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
    vector<int> dp(n+1,0);
    for(int i = n; i>=0; i--){
        if(dp[i] == 0 && i!=n) continue;
        string aux = to_string(i);
        for(auto e:aux){
            int num = e - '0';
            int x = dp[i]+1;
            if(dp[i-num] == 0){
                dp[i-num] = x;
            }
            else if(dp[i-num] > x){
                dp[i-num] = x;
            }
        }
    }
    cout<<dp[0]<<ENDL;
    return 0;
}
