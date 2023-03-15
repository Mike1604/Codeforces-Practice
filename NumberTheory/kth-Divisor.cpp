/*
    https://codeforces.com/problemset/problem/762/A
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
 
int main(){
    lli n, k; cin >> n >> k;
    vector<lli> divisores;
    for (lli i = 1; i * i <= n; i++){
        if (n % i == 0){
            divisores.push_back(i);
            if (i * i != n){
                divisores.push_back(n / i);
            }
        }
    }
    if (divisores.size() >= k){
        sort(divisores.begin(), divisores.end());
        cout << divisores[k - 1];
    }
    else{
        cout << "-1" << endl;
    }
    return 0;
}