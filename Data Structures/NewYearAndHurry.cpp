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
    lli n, k, max=240; cin >> n >> k;
    vector<lli> sum(n,0);
    lli aux=0;
    for(int i=0; i<n; i++){
        aux+=5*(i+1);
        sum[i]=aux;
    }

    lli l=0, r=sum.size()-1, mid;

    while(l<=r){
        mid = (l+r)/2;
        if((sum[mid]+k) ==  max){cout<<mid+1<<ENDL; return 0;}
        else if((sum[mid]+k) > max){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }

    cout << r+1 << ENDL;

    return 0;
}