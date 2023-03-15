#include <bits/stdc++.h >
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ENDL '\n'
using namespace std;
typedef long long lli;

int main()
{
    lli a, le, len;
    string b, res;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cin>>b;
        le = (b.length());
        if(le>10){
            len = le-2;
            cout<<b[0]<<len<<b[le-1]<<ENDL;
        }  
        else{
            cout<<b<<ENDL;
        }      
    }
    
    return 0;
}