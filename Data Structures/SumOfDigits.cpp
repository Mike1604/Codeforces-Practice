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
    string a; cin >> a;
    lli num, ans=0;

    while(a.length()>1){
        lli sum=0;
        for(int i=0; i<a.length(); i++){
            int num = a[i] - '0';
            sum+=num;
            
        }
        ans++;
        a = to_string(sum);
    }
    cout << ans << ENDL;
    return 0;
}