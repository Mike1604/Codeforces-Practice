/*
https://codeforces.com/contest/2094/problem/D
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
    string p, s; cin>>p>>s;
    vector<pair<char,lli>> seqP;
    vector<pair<char,lli>> seqS;

    char act = p[0];
    lli apar = 0;
    for(auto e:p){
        if(act != e){
            seqP.push_back({act,apar});
            apar = 1;
            act = e;
        }else{
            apar++;
        }
    }
    seqP.push_back({act,apar});


    act = s[0];
    apar = 0;
    for(auto e:s){
        if(act != e){
            seqS.push_back({act, apar});
            apar = 1;
            act = e;
        }else{
            apar++;
        }
    }
    seqS.push_back({act, apar});

    lli i = 0, j=0, n = sz(seqS), m = sz(seqP), auxSeq = 0;
    bool ans = true;
    while(i < n && i < m){
        if(seqS[i].f != seqP[i].f){
            ans=false;
            break;
        }else{
            if((seqS[i].s < seqP[i].s ) || (seqS[i].s > seqP[i].s*2)){
                ans = false;
                break;
            }
        }
        i++;
    }

    if (i != n || i != m) {
        ans = false;
    } 


    if(ans) yes
    else nop
}

int main(){_
    lli t; cin>>t;
    while(t--)solve();
    return 0;
}
