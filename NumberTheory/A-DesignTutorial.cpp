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
    lli n;
    cin >> n;
    vector<bool> criba(n+1, true);
    criba[0] = criba[1] = false;
    for(int i=2; i*i<=n; i++) {
        if(criba[i]){
            for(int j = (i*i); j<=n; j+=i){
                criba[j] = false;
            }
        }

    }
    for(int x=4; x<=n-4; x+=2) {
        int y = n-x;
        if( (!criba[x]) && (!criba[y])) {
            cout << x << " " << y << endl;
           
        }
    }
    return 0;
}