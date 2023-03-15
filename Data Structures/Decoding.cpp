//https://codeforces.com/contest/746/problem/B?csrf_token=c59279acae1392d0bea904253e541aa5
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
    string x, out;
    cin >> n >> x;
    out += x[0];
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0)
            out += x[i];
        else
            out = x[i] + out;
    }
    if (n % 2 == 0)
        reverse(out.begin(), out.end());
    cout << out << endl;
    return 0;
}