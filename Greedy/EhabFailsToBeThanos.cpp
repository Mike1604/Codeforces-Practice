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

int main(){_
    lli n,m; cin>>n;
    vi nums;
    fore(i,0,(n*2)){
        cin>>m;
        nums.pb(m);
    }
    sort(nums.rbegin(), nums.rend());
    lli l=0,r=nums.size()-1, aux=0, aux2=0;
    while(l<=r){
        aux+=nums[l];
        aux2+=nums[r];
        l++;
        r--;
    }
    if(aux!=aux2){
        for(auto e:nums){cout<<e<<" ";}
    }
    else{cout<<"-1";}
    cout<<ENDL;
    return 0;
}
