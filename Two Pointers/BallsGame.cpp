/*
https://codeforces.com/contest/430/problem/B
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: LOST FOREVER♫
                CREATOR: Travis Scott™®
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
    lli n, k, x; cin>>n>>k>>x;
    vi nums(n,0);
    fore(i,0,n){cin>>nums[i];}
    lli ans=0;
    fore(r,0,n){
        if(nums[r] == x){
            lli j=r, m=r, s=2, auxans=0;
            while((nums[m] == nums[j]) && (m>=0) && (j<n)){
                while((m>0) && (nums[m-1] == nums[m])){ m--; s++;}
                while((j<n) && (nums[j+1] == nums[j])){ j++; s++;}
                m--; j++;
                if(s<3) break;

                auxans+=s; 
                s=2;
            }
            /* cout<<auxans<<" "<<r<<ENDL; */
            ans = max(ans, auxans-1);
        }
    }
    cout<<ans<<ENDL;
    return 0;
}
