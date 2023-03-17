/*
https://codeforces.com/contest/6/problem/B
    
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: Free Smoke♫
                CREATOR: Drake™®
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

int main(){
    lli n,m; cin>>n>>m;
    char c; cin>>c;
    vector<vector<char>> room(n);
    pair<char, vector<pair<lli,lli>>> coordenadas;
    fore(i,0,n){
        fore(j,0,m){
            char aux; cin>>aux;
            room[i].push_back(aux);
            if(aux==c){
                coordenadas.f=aux;
                coordenadas.s.push_back({i,j});
            }
        }
    }
    set<char> desks;
    lli ans=0;
    for(auto e:coordenadas.s){
        lli x=e.f, y=e.s;
        fore(i,0,n){
            fore(j,0,m){
                if((room[i][j]!=c) && (room[i][j]!='.') && (desks.count(room[i][j])) !=1){
                    if((j==y) && ((x-i)==1)){
                        desks.insert(room[i][j]);
                        ans++;
                    }
                    else if((i==x) && ((y-j)==1)){
                        desks.insert(room[i][j]);
                        ans++;
                    }
                    if((j==y) && ((i-x)==1)){
                        desks.insert(room[i][j]);
                        ans++;
                    }
                    else if((i==x) && ((j-y)==1)){
                        desks.insert(room[i][j]);
                        ans++;
                    }
                }
            }
        }
        
    }
    cout<<ans<<ENDL;
    return 0;
}