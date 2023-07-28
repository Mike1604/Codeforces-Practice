/*
https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D
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
    lli n, s; cin>>n>>s;
    vi nums(n,0);
    fore(i,0,n){cin>>nums[i];}
    lli ans=0, sum=0, l=0;
    fore(r,0,n){
        sum+=nums[r];
        while(sum>=s){
            sum-=nums[l];
            l++;
        }
        ans += l;
    }
    cout<<ans<<ENDL;
   
    return 0;
}
