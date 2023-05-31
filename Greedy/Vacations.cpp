/*
https://codeforces.com/contest/699/problem/C
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
    int n; cin>>n;
    vector<int> a(n,0);
    fore(i,0,n){cin>>a[i];}
    int ans=0;
    if(a[0]==0){ans++;}
    fore(i,1,n){
        if(a[i]==0){ans++;}
        else if(a[i]==1 && a[i-1]==1){
            a[i]=0;
            ans++;
        }
        else if(a[i]==2 && a[i-1]==2){
           a[i]=0;
           ans++;
        }
        else{
           if(a[i-1]==1){
               a[i]=2;
            }
           else if(a[i-1]==2){
               a[i]=1;
            }
        }
    }
    cout<<ans<<ENDL;
    return 0;
}
