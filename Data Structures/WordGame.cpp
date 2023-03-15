#include <bits/stdc++.h >
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ENDL '\n'
using namespace std;
typedef long long lli;

int main() {
    lli n, m, p1=0, p2=0, p3=0; cin >> n >> m;
    string a;
    vector<vector<string>> name (n, vector<string>(m));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> name[i][j];
        }
    }


    return 0;

}