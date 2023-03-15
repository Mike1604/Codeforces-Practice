#include <bits/stdc++.h >
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ENDL '\n'
using namespace std;
typedef long long lli;
int main()
{
    int n;
    cin>>n;
    if((n % 2) == 0 && n > 2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}