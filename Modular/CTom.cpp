#include <bits/stdc++.h >
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ENDL '\n'
using namespace std;
typedef long long lli;
int main()
{
    int n=0;
    string name[100];

    cin>>n;
    for (int i = 0; i<n; i++)
    {
        cin>>name[i];   
    }

    for (int i = 0; i<n; i++)
    {
        bool f=false; 
        cout<<"i= "<<i<<ENDL;
        for (int j = 0; j < i; j++)
        {
            cout<<"j= "<<j<<ENDL;
            if((name[i]==name[j])){
                f=true;
            }
        }
        if(f==true){
            cout<<"YES"<<ENDL;
        }
        else{
            cout<<"NO"<<ENDL;
        }
    }

    return 0;
}