#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ENDL '\n'
using namespace std;
typedef long long lli;
int main()
{
    lli m=0, n=0;
    lli res=1,sol=0;
    cin>>n>>m;

    res=pow(2,n);
    sol=m % res;

    cout<<sol<<ENDL;
    return 0;
}