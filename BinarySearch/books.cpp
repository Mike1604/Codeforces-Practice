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
 
int main(){
    lli n, t; cin >> n >> t;
    vector<lli> books(n,0);
    vector<lli> booksSum (n,0);
    fore(i, 0, n){
        cin >> books[i];
    }

    booksSum[0] = books[0];
    for(int i=1; i<n; i++){
        booksSum[i] = booksSum[i-1] + books[i];
    }

    lli l=1, r=n, sol=0;

    while(l<=r){
        lli m=l+(r-l)/2, time=0;
        bool posible = false;
        for(int i=0; i+m<=n; i++){
            time=booksSum[i+m-1];
            if(i>0){
                time-=booksSum[i-1];  
                if(time<=t){
                    posible = true;
                }
            }
            else{
                if(time<=t){
                    posible = true;
                }
            }
        }

        if(posible){
            sol=max(sol,m);
            l = m+1;
        }
        else{
            r=m-1;
        }
    }
    cout<<sol<<ENDL;

    return 0;
}