/*
https://codeforces.com/contest/1810/problem/B
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

int main(){_
    lli t; cin>>t;
    while(t--){
        lli  n,x,y; cin>>n;
        if(n%2==0) cout<<"-1"<<endl;
        else{
            vi v;
            while(n>1){
                x=(n-1)/2;
                y=(n+1)/2;
                if(x%2==0) { n=y; v.push_back(1);}
                else { n=x; v.push_back(2);}
            }
            cout<<v.size()<<endl;
            for(long int i=(v.size())-1;i>=0;i--) cout<<v[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
