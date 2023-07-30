/*
https://codeforces.com/problemset/problem/456/A
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
    lli n; cin>>n;
    vector<ii> nums;
    fore(i,0,n){
        lli x, y; cin>>x>>y;
        nums.push_back({x,y});
    }
    sort(all(nums));
    bool flag = false;
    fore(i,0,n-1){
        if(nums[i].s > nums[i+1].s){
            flag = true;
        }
    }
    if(flag){
        cout<<"Happy Alex"<<ENDL;
    }else{cout<<"Poor Alex"<<ENDL;}
    return 0;
}
