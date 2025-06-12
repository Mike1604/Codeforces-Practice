/*
https://codeforces.com/contest/275/problem/A
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

int main(){_
    vector<vector<lli>> currGrid = {
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };
    vector<pair<int, int>> moves {{0,1}, {1,0}, {-1,0}, {0,-1},{0,0}};

    fore(i,0,3){
        fore(j,0,3){
            lli x; cin>>x;
            if(x%2 != 0){
                for(auto e:moves){
                    pair<int, int> aux = {i,j};
                    aux.first += e.first;
                    aux.second += e.second;                    
                    if(aux.f >= 0 && aux.f < 3 && aux.s >= 0 && aux.s <3){
                        if(currGrid[aux.f][aux.s] == 0){
                            currGrid[aux.f][aux.s] = 1;
                        }else{
                            currGrid[aux.f][aux.s] = 0;
                        }
                    }
                }
            }
        }
    }

    fore(i,0,3){
        fore(j,0,3){
            cout<<currGrid[i][j];
        }cout<<ENDL;
    }    

    return 0;
}
