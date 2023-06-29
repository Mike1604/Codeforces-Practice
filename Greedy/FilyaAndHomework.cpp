/*
https://codeforces.com/contest/714/problem/B
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
    int n; cin>>n;
    set<lli> nums;
    fore(i,0,n){
        lli x; cin>>x;
        nums.insert(x);
    }
    if(nums.size() < 3){
        yes;
    }else if(nums.size() >3){
        nop;
    }else{
        int a,b,c;
        a=*nums.begin();
        b=*++nums.begin();
        c=*--nums.end();
        /* cout<<a<<" "<<b<<" "<<c<<ENDL; */
        if(b-a == c-b){
            yes;
        }else{nop;}
    }

    return 0;
}
