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
 
int main() {
    lli t;
    cin >> t;
    vector<lli>solve;
    while (t--) {
        lli n, k, d, w;
        cin >> n >> k >> d >> w;
        vector<lli> arrival_times(n);
        for (lli i = 0; i < n; i++) {
            cin >> arrival_times[i];
        }
        sort(arrival_times.begin(), arrival_times.end());
        lli i=0;
        lli ans=0;
        while(i<n){
            lli aux=arrival_times[i]+d+w, j=i, sum=0;
            while(j<n && sum<k){
                if(arrival_times[j]<=aux){
                    sum++;
                }
                else{break;}
                j++;
            }
            i=j;
            ans++;
        }
        solve.push_back(ans);
    }
    for(auto e:solve){cout<<e<<ENDL;}
    return 0;
}