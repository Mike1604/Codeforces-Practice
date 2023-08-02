/*
https://codeforces.com/contest/466/problem/A
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: LOST FOREVER♫
                CREATOR: Travis Scott™®
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
    lli n, m, a, b; cin>>n>>m>>a>>b;
    vi nums(n+1,LLONG_MAX);
    nums[0]=0;
    for(int i=0; i<n; i++){
        lli aux = nums[i] + b;

        if((i+m <= n) && (nums[i+m] > aux)){
            nums[i+m]=aux;
        }else if((i+m > n) && (nums[n] > aux)){
            nums[n]=aux;
        }

        if((i+1 <= n) && (nums[i+1] > nums[i]+a)){
            nums[i+1]=nums[i]+a;
        }
    }
    /* for(auto e:nums){cout<<e<<" ";}cout<<ENDL; */
    cout<<nums[n]<<ENDL;
    return 0;
}
