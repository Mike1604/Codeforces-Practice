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

lli solve(map<lli,lli> &dp, vi& nums, int n){
    if(dp.count(n) != 0 ){return dp[n];}
    lli ans=nums[n];
    lli sum=0;
    if((n+nums[n]) <= nums.size()-1){
        ans= solve(dp, nums,(n+nums[n]));
        sum = nums[n]+ans;
        dp[n]=sum;
    }else{dp[n]=ans;}
    

/*     cout<<"N: "<<n<<" Sum: "<<sum<<" Ans:"<<dp[n]<<ENDL; */
    return dp[n];
}


int main(){_
    lli t; cin>>t;
    while(t--){
        lli n; cin>>n;
        vi nums(n);
        fore(i,0,n){cin>>nums[i];}
        map<lli,lli> dp;
        lli aux=0, maxi=0;
        for(int i=0; i<nums.size(); i++){
            solve(dp, nums,i);
            aux=dp[i];
            maxi=max(maxi,aux);
        }
        cout<<maxi<<ENDL;
    }
    return 0;
}
