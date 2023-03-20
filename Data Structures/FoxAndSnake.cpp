/*
https://codeforces.com/contest/510/problem/A
    
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: The Bird♫
                CREATOR: Andersoon .Paak™®
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
    lli n, m,aux=0; cin>>n>>m;
    bool flag=false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if((i%2)==0){
                cout<<"#";
            }
            else{
                if(((aux%2)==0) && (j==(m-1))  && (flag==false)){
                    cout<<"#";
                    flag=true;
                    aux++;
                }
                else if(((aux%2)!=0) && (j==0) && (flag==false)){
                    cout<<"#";
                    flag=true;
                    aux++;
                }
                else{cout<<".";}
            }   
        }
        flag=false;
        cout<<ENDL;
    }
    return 0;
}