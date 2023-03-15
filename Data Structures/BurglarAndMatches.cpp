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
 
int main()
{
 
    pair<int, int> p[25];
 
    int n, m;
    cin >> n >> m;
 
    for (int i = 0; i < m; i++) {
        cin >> p[i].second >> p[i].first;
    }
 
    sort(p, p + m);
 
    int sum = 0;
 
    for (int i = m; i >= 0; i--) {
        while(p[i].second != 0 && n != 0) {
            p[i].second -= 1;
            n -= 1;
            sum += p[i].first;
        }
        if (n == 0) {
            break;
        }
    }
 
    cout << sum;
 
    return 0;
}