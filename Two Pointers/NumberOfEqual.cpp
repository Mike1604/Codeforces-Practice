/*
https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
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
    lli n,m; cin>>n>>m;
    vi numsa(n,0);
    fore(i,0,n){cin>>numsa[i];}
    vi numsb(m,0);
    fore(i,0,m){cin>>numsb[i];}
    map<lli,lli> dp;

    lli i=0, j=0, ans=0;
    while((i<numsa.size()) || (j<numsb.size())){
        if(i>=sz(numsa) || j>=sz(numsb)){break;}
        if(numsa[i] == numsb[j]){
            lli aux = j;
            if(dp.count(numsa[i]) != 0){
                ans+=dp[numsa[i]];
            }else{
                lli auxans=0;
                while((numsb[aux] == numsa[i]) && aux<sz(numsb)){auxans++; aux++;}
                ans+=auxans;
                dp[numsa[i]]=auxans;
            }  
            i++;
        }else if(numsa[i] > numsb[j]){j++;}
        else{i++;}
    }
    cout<<ans<<ENDL;
    return 0;
}
