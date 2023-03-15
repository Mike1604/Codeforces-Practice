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
    int n;
    cin>>n;
    vector<int> x(n);
    vector<lli> sol;
    for(int i=0; i<n; i++) cin>>x[i];
    sort(x.begin(), x.end());
    int q;
    cin>>q;
    while(q--){
        int m;
        cin>>m;
        sol.push_back(upper_bound(x.begin(), x.end(), m)-x.begin());
    }

    for(auto e:sol){
        cout<<e<<ENDL;
    }

    return 0;
}