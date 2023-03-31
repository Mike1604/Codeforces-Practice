/*
https://codeforces.com/contest/1742/problem/E
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

bool check(vector<lli>& nums, lli& q, lli& ans){
    return nums[ans]<=q;
}

void solve(){
    lli n,m; cin>>n>>m;
    vi stairs((n+1),0);
    vi prefix((n+1),0);
    stairs[0]=0;
    prefix[0]=0;
    fore(i,1,n+1){
        lli x; cin>>x;
        if(stairs[i-1] >= x){stairs[i]=stairs[i-1];}
        else{stairs[i]=x;}
        prefix[i]=prefix[i-1]+x;
    }
    fore(i,0,m){
        lli q; cin>>q;
        lli l=0, r=n+1;
        while(r>l+1){
            lli mid=(l+r)/2;
            //cout<<"Check: "<<mid<<" "<<check(stairs,q,mid)<<ENDL;
            if(check(stairs,q,mid)){l=mid;}
            else{r=mid;}
        }
        //cout<<"Pos: "<<l<<ENDL;
        cout<<prefix[l]<<" ";
    }
    cout<<ENDL;
}

int main(){_
    lli t; cin>>t;
    while(t--){solve();}
    return 0;
}
