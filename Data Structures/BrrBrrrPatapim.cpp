/*
https://codeforces.com/contest/2094/problem/C
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: LOST FOREVER♫
                CREATOR: Travis Scott™®
                0:35 ━❍──────── -3:56
                ↻     ⊲  Ⅱ  ⊳     ↺
                   
*/
//g++ -std=c++17 ./Data\ Structures/<FileName>.cpp -o test && ./test < in.txt > out.txt
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
    lli total = n+n;
    vector<lli> perm(total, 0);
    set<lli> dis;
    fore(i,0,n){
        fore(j,0,n){
            lli x; cin>>x;
            perm[i+j+1] = x;
            dis.insert(x);
        }
    }

    lli missing = -1;
    fore(i,0,total){
        if(!dis.count(i+1)){
            missing = i+1;
        }
    }

    perm[0] = missing;

    for(auto e:perm){
        cout<<e<<" ";
    }cout<<ENDL;
}

int main(){_
    lli t; cin>>t;
    while(t--)solve();
    return 0;
}
