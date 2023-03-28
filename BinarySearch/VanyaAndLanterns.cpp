/*
https://codeforces.com/contest/492/problem/B
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

lli n,m;
double r; 

bool check(double& D, vi& numbers){
    lli aux=0;
    if((numbers[0]) > (D)){return false;}
    if((m-numbers[n-1]) > (D)){return false;}
    fore(i,1,n){
        if((numbers[i]-numbers[i-1]) > (D*2)){return false; break;}
    }
    return true;
}


int main(){_
    cin>>n>>m;
    r=m;
    vi nums(n);
    fore(i,0,n){cin>>nums[i];}
    sort(all(nums));
    double l=0;
    fore(t,0,100){
        double mid=(l+r)/2;
        if(check(mid,nums)){r=mid;}
        else{l=mid;}
    }
    cout<< setprecision(20) << r<<ENDL;
    return 0;
}
