/*
https://codeforces.com/problemset/problem/327/A
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
    lli n; cin>>n;
    vi nums(n,0);
    fore(i,0,n){
        cin>>nums[i];
    }
    vi prefix(n,0);
    fore(i,0,n){
        if(nums[i] == 0){prefix[i]=1;}
        else{prefix[i]=-1;}
    }
    vi dp(n,0);
    dp[0]=prefix[0];
    lli maxSum = 0;
    fore(i,1,n){
        dp[i] = max(prefix[i], dp[i-1]+prefix[i]);
        maxSum = max(maxSum, dp[i]);
    }
    if(maxSum == 0){
        if(nums[0]==1) nums[0]=0;
        else if(nums[0]==0) nums[0]=1;
        cout<<accumulate(nums.begin(), nums.end(), 0);
        return 0;
    }
    lli ans=0;
    for(int i=n-1; i>=0; i--){
        if(dp[i] == maxSum){ 
            if(nums[i]==0){ans+=1;}
            maxSum-=prefix[i];
        }else{ans+=nums[i];}
    }
    cout<<ans<<ENDL;
    return 0;
}
