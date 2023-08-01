/*
https://codeforces.com/contest/489/problem/C
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: LOST FOREVER♫
                CREATOR: Travis Scott™®
                0:35 ━❍──────── -3:56
                ↻     ⊲  Ⅱ  ⊳     ↺
                   
*/
//g++ -std=c++17 a.cpp && a < in.txt > out.txt
#include<bits/stdc++.h>
#define fore(i,a,b) for(int i=(a), FINALD=(b); i<FINALD; ++i)
#define ENDL '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(s) int(s.size())
#define all(s) s.begin(), s.end()
#define yes cout<<"YES"<<ENDL;
#define nop cout<<"NO"<<ENDL;
using namespace std;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef pair<int, int> pi;
typedef vector<lli> vi;

bool possible(int m, int s)
{
    return s >= 0 && s <= 9 * m;
}

int main(){_
    lli n, m; cin>>n>>m;

    if (m == 0 && n > 1) {
        cout << "-1 -1" << endl;
        return 0;
    }

    string ansmin;
    int sum = m;
    for (int i = 0; i < n; i++){
        for (int d = 0; d < 10; d++){
            if ((i > 0 || d > 0 || (n == 1 && d == 0)) && possible(n - i - 1, sum - d))
            {
                /* cout<<i<<" "<<d<<ENDL; */
                ansmin += char('0' + d);
                sum -= d;
                break;
            }
        }
    }

    vector<int> ans;
    lli s = m + 1, total=0;
    for (int i = 0; i < n; i++) {
        for (int digit = 9; digit >= 0; digit--) {
            if (s - digit > 0) {
                ans.push_back(digit);
                s -= digit;
                total+=digit;
                break;
            }
        }
    }
    /* cout<<s<<" "<<total<<ENDL; */
    if(total != m){
        cout<<-1<<" "<<-1<<ENDL;
    }else{
        cout<<ansmin<<" ";
        for(auto e:ans){
            cout<<e;
        }cout<<ENDL;
    }
    

    return 0;
}
