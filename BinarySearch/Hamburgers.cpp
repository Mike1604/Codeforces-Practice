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

lli c=0,s=0,b=0;
lli cc,cs,cb;
lli pc,ps,pb;
lli r;

bool check(const lli& ans){
    lli auxc=c*ans, auxs=s*ans, auxb=b*ans;
    if((auxc-cc)>0){auxc=auxc-cc;}else{auxc=0;}
    if((auxs-cs)>0){auxs=auxs-cs;}else{auxs=0;}
    if((auxb-cb)>0){auxb=auxb-cb;}else{auxb=0;}
    auxc=pc*auxc, auxs=ps*auxs, auxb=pb*auxb;
    lli aux = auxc+auxs+auxb;
    return aux <= r;
}

int main(){_
    string ham; cin>>ham;
    for(auto e:ham){
        if(e=='C'){c++;}
        else if(e=='B'){b++;}
        else if(e=='S'){s++;}
    }
    cin>>cb>>cs>>cc;
    cin>>pb>>ps>>pc;
    cin>>r;
    lli l=0, r=1e13;
    while(r>l+1){
        lli mid= (l+r)/2;
        if(check(mid)){l=mid;}
        else{r=mid;}
    }
    cout<<l<<ENDL;
    return 0;
}
