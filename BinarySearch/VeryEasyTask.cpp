/*
https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
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

lli n, x, y; 
bool check(lli m){
    return (m/x)+(m/y) >= n;
}

int main(){_
    cin>>n>>x>>y;
    lli aux=min(x,y);
    n--;
    lli l=0, r=(max(x,y))*n;
    while(r>l+1){
        lli mid=(l+r)/2;
        if(check(mid)){r=mid;}
        else{l=mid;}
    }
    cout<<r+aux<<ENDL;
    return 0;
}
