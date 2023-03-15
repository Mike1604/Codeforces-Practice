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
    lli n, m, glob =0; cin >> n;

    for(int i=0; i<n; i++){
        glob= 0;
        string s;
        set<char> p;
        cin >> m >> s;
        for(int j=0; j<m; j++){
            set<char>::iterator ite;
            ite = p.find(s[j]);

            if (ite == p.end()) {
                glob+=2;
            }
            else if((ite == p.end()) && (j == (m-1))){
                glob+=1;
            }
            else {
                glob+=1;
            }
            p.insert(s[j]);
        }
        cout<<glob<<ENDL;

    }

    return 0;

}