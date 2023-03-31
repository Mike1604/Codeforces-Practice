/*
https://codeforces.com/contest/1374/problem/C
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
    lli n; cin>>n;
    string s; cin>>s;
    lli ap=0, cerr=0,ans;
    for(auto e:s){
        if(e=='('){ap++;}
        else if((e==')') && (ap!=0)){ap--;}
        else{cerr++;}
    }
    cout<<(ap+cerr)/2<<ENDL;
}

int main(){_
    lli t; cin>>t;
    while(t--){solve();}
    return 0;
}
