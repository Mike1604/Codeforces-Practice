/*
https://codeforces.com/problemset/problem/535/B
                ╔════════════════╗
                ┃ ▁▂▃▅▆▇ 100% |
                ╚════════════════╝
                SONG: Another Day Of Sun♫
                CREATOR: La la land cast™®
                0:35 ━❍──────── -3:56
                ↻     ⊲  Ⅱ  ⊳     ↺
*/
#include<bits/stdc++.h>
#define fore(i,a,b) for(int i=(a), FINALD=(b); i<FINALD; ++i)
#define ENDL '\n'
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(s) int(s.size())
#define all(s) s.begin(), s.end()
using namespace std;

typedef long long lli;

vector<lli> luckyNumbers;
lli lim=1e9; 

void allnumbers(lli a){
    if(a>lim){
        return;
    }   
    lli aux=a*10+4, aux2=a*10+7;
    luckyNumbers.push_back(aux);
    luckyNumbers.push_back(aux2);
    allnumbers(aux);
    allnumbers(aux2);
}

int main(){
    lli x; cin >> x;
    allnumbers(0);

    sort(luckyNumbers.begin(), luckyNumbers.end());

    for(int i=0; i<luckyNumbers.size(); i++){
        if(luckyNumbers[i]==x){
            cout<<i+1<<ENDL;
            break;
        }
    }

    return 0;
}