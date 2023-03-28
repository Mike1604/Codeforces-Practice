/*
https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/E
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

double check(double& c, double& n){
    double a=pow(c,2);
    double b=sqrt(c);
    b=(a+b);
    return b;
}

int main(){_
    double n; cin>>n;
    double l=0,r=1e10+10, mid;
    bool f=true;
    fore(t,0,100){
        double mid =(l+r)/2;
        if(check(mid,n)==n){cout << setprecision(10) <<mid<<ENDL; f=false; break;}
        else if(check(mid,n)>n){r=mid;}
        else{l=mid; }
    }
    if(f){cout<< setprecision(10) << r<<ENDL;}
    return 0;
}
