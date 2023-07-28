/*
https://cses.fi/problemset/task/1755
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
    string s; cin>>s;
    map<char,lli> apar;
    for(auto e:s){
        apar[e]+=1;
    }
    int flag=0;
    char aux='$';
    string ans="";
    for(auto e:apar){
        if(e.s%2 != 0){
            flag++;
            aux=e.f;
        }
    }
    if(flag>1){cout<<"NO SOLUTION"<<ENDL;}
    else{
        for(auto e:apar){
            /* cout<<e.f<<" : "<<e.s<<ENDL; */
            if(e.f != aux){
                for(int i=0; i<(e.s/2); i++){
                    ans+=e.f;
                }
            }
        }
        if(flag==0){
            for(int i=ans.size()-1; i>=0; i--){
                ans+=ans[i];
            }
        }else{
            fore(i,0,apar[aux]){
                ans+=aux;
            }
            for(int i=ans.size()-1-apar[aux]; i>=0; i--){
                ans+=ans[i];
            }
        }
        
    }
    cout<<ans<<ENDL;
    return 0;
}
