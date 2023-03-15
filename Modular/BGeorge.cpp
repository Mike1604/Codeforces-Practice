#include <bits/stdc++.h >
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ENDL '\n'
using namespace std;
typedef long long lli;
int main()
{
    int n=0, p=0, q=0, res=0;

    cin>>n;
    for (int i = 0; i<n; i++)
    {
        cin>>p>>q;
        if((q-p) >=2 ){
            res+=1;
        }
    }
    
    cout<<res;

    return 0;
}