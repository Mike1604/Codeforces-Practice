/*
https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: Borderline ♫
                CREATOR: Tame Impala ™®
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

lli n, k;

bool check(double& l, vi& numbers){
    lli aux=0;
    for(auto e:numbers){aux+=(e/l);}
    return aux>=k;
}

int main(){_
    cin>>n>>k;
    vi nums(n);
    fore(i,0,n){cin>>nums[i];}
    double l=0, r=1e8;
    fore(t,0,100){
        double mid=(l+r)/2;
        if(check(mid,nums)){l=mid;}
        else{r=mid;}
    }
    cout<< setprecision(20) << l<<ENDL;
    return 0;
}
