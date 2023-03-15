/*
    https://codeforces.com/problemset/problem/26/A
*/
#include<bits/stdc++.h>
#define fore(i,a,b) for(int i=(a), FINALD=(b); i<FINALD; ++i)
#define ENDL '\n'
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(s) int(s.size())
#define all(s) s.begin(), s.end()
using namespace std;

typedef long long lli;
 
vector<lli>primes;

void criba(lli n){
    vector<bool> c(n+1, true);
    c[0] = c[1] = false;
    for(lli i=2; (i*i)<=n; i++){
        if(c[i]){
            for(lli j = (i*i); j<=n; j+=i){
                c[j]=false;
            }
        }
    }

    for(int i=0; i<=n; i++){
        if(c[i]){
            primes.push_back(i);
        }
    }

}

int main(){
    lli n, ans=0; cin>>n;
    criba(n);
    for(lli i=1; i<=n; i++){
        int aux=0;
        for(auto e:primes){
            if((i%e)==0){aux++;}
        }
        if(aux==2){ans++;}
    }
    cout<<ans<<ENDL;
    return 0;
}