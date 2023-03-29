/*
https://codeforces.com/contest/1201/problem/C
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: Everybody♫
                CREATOR: Mac Miller™®
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

lli n,k; 

bool check(vector<lli>& ns, const lli& ans){
    lli aux=0;
    fore(i,0,(ns.size()/2)+1){
        if((ans-ns[i])>0) aux+= ans-ns[i];
        if(aux>k) return false;
    }
    return aux<=k;
}

int main(){_
    cin>>n>>k;
    vi nums(n);
    fore(i,0,n){cin>>nums[i];}
    sort(nums.rbegin(), nums.rend());
    lli l=0, r=nums[(nums.size()/2)]+k+1;
    while(r>l+1){
        lli mid=(l+r)/2;
        if(check(nums, mid)){l=mid;}
        else{r=mid;}
    }
    cout<<l<<ENDL;
    return 0;
}
