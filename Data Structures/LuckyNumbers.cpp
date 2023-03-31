/*
https://codeforces.com/contest/1808/problem/A
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

void solve(){
    lli l, r; cin>>l>>r;
    lli aux1=0, ans=0;
    while(l<=r){
        string left=to_string(l);
        int mx=left[0]-'0', mn=left[0]-'0';
        for(auto e:left){
            string aux;
            aux+=e;
            mx=max(stoi(aux),mx);
            mn=min(stoi(aux),mn);
        }
        if((mx-mn) >= aux1){
            aux1=(mx-mn);
            ans=l;
        }
        if(aux1==9){break;}
        l++;
    }
    cout<<ans<<ENDL;
}

int main(){_
    lli t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
