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

int n,m;
vector<vector<char>> mapa(1000, vector<char>(1000));
vector<vector<bool>> vis(1000, vector<bool>(1000, false));
vector<int> movesx={1,-1,0,0};
vector<int> movesy={0,0,1,-1};

void dfs(int i, int j){
    vis[i][j]=true;
    fore(k,0,4){
        int posx = i + movesx[k];
        int posy = j + movesy[k];
        if((posx >= 0) && (posx < n) && (posy >= 0) && (posy < m )){
            if((mapa[posx][posy] == '.') && (!vis[posx][posy])){
                dfs(posx,posy);
            }
        }
    }
}

int numberOfRooms(){
    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mapa[i][j] == '.' && !vis[i][j]){
                dfs(i,j);
                ans++;     
            }
        }
    }
    return ans;
}

int main(){_
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mapa[i][j];
        }
    }
    cout<<ENDL;
    cout<<numberOfRooms()<<ENDL;
    return 0;
}
