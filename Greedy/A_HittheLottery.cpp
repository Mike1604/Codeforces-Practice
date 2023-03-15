#include <bits/stdc++.h >
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ENDL '\n'
using namespace std;
typedef long long lli;

int main()
{
    lli n, ans=0, aux;
    int coin[5]={1, 5, 10, 20, 100};
    cin>>n;
    for (int i = 4; i >= 0; i--)
    {
        if(n/coin[i]>0){
            aux = (n/coin[i]) * coin[i];
            
            ans += (n/coin[i]);

            n -= aux;
        }
    }
    cout << ans << ENDL;
    return 0;
}
