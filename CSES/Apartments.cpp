/*
https://cses.fi/problemset/task/1084/
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
    lli n, m,k; cin>>n>>m>>k;
    vi apart(n);
    vi person(m);
    fore(i,0,n){cin>>apart[i];}
    fore(i,0,m){cin>>person[i];}
    sort(apart.rbegin(), apart.rend());
    sort(person.rbegin(), person.rend());
    lli ans=0,i=0,j=0;
    while((i<n) && (j<m)){
        if(((person[j]+k)>= apart[i] ) && ((person[j]-k)<=apart[i])){i++; j++; ans++;}
        else if(apart[i] > person[j]+k){i++;}
        else if(apart[i] < person[j]-k){j++;}
        
    }
    cout<<ans<<ENDL;
    return 0;
}
