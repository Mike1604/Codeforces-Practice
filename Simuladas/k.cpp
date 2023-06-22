/*

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
    int aper, cierre;
    aper=0;
    cierre=0;
    bool flag = true;
    for(auto e:s){
        if(e == '('){aper++;}
        else{cierre++;}
        if(cierre > aper){
            flag=false;
            break;
        }
    }
    if(flag){
        int aux= aper-cierre;
        fore(i,0,aux){
            s+=')';
        }
        cout<<s<<ENDL;
    }else{
        cout<<"IMPOSSIBLE"<<ENDL;
    }
    return 0;
}
