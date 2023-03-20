/*
https://codeforces.com/contest/1807/problem/C
    
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: Everybody♫
                CREATOR: Mac Miller™®
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
    lli t; cin>>t;
    vector<string>solve;
    while(t--){
        lli n;  cin>>n;
        string s; cin>>s;
        map<char,lli> apar;
        char last='0';
        string ans;
        bool f=true;
        fore(i,0,n){
            char aux=s[i];
            if(apar.count(aux)==0){
                if(last=='0'){last='1'; ans+='1'; apar[aux]=1;}
                else{last='0'; ans+='0'; apar[aux]=0; }
            }
            else{
                if((last=='0') && apar[aux]==0){cout<<"NO"<<ENDL; f=false;  break;}
                else if((last=='1') && apar[aux]==1){cout<<"NO"<<ENDL; f=false; break;}
                else{
                    if(apar[aux]==1){last='1';}
                    else{last='0';}
                }
            }
        }
        if(f){cout<<"YES"<<ENDL;}
    }
    return 0;
}