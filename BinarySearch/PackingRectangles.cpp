/*

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

bool check(lli& len, lli& w, lli& h, lli& n){
    lli aux1=len/w, aux2=len/h;
    if((aux1*aux2) >= n){return true;}
    else{return false;}
}


int main(){_
    lli w,h,n; cin>>w>>h>>n;
    lli l=0, r=1;
    while(!check(r,w,h,n)){r*=2;} 
    while(r>l+1){
        lli mid=(l+r)/2;
        if(check(mid,w,h,n)){r=mid;}
        else{l=mid;}
    }
    cout<<r<<ENDL;
    return 0;
}
