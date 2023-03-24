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
    lli n,t; cin>>n;
    vi nums(n);
    fore(i,0,n){cin>>nums[i];}
    sort(all(nums));
    cin>>t;
    while(t--){
        lli a,b, l=-1, r=n; cin>>a>>b;
        while(r>l+1){
            lli mid = (l+r)/2;
            if(nums[mid] <= b){l=mid;}
            else{r=mid;}
        }
        lli aux=l;
        l=-1;r=n;
        while(r>l+1){
            lli mid = (l+r)/2;
            if(nums[mid] < a){l=mid;}
            else{r=mid;}
        }
        cout<<aux-r+1<<" ";
    }
    cout<<ENDL;
    return 0;
}
