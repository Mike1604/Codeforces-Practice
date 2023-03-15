#include <bits/stdc++.h >
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ENDL '\n'
using namespace std;
typedef long long lli;
int main()
{
    int n=0;
    string name;

    cin>>n;
    map<string, int>mymap;
    for (int i = 0; i < n; i++)
    {
        cin>>name;
        if(mymap.count(name)==0){
            mymap[name]=1;
            cout<<"OK"<<ENDL;
        }
        else{
            cout<<name<<mymap[name]<<ENDL;
            mymap[name]+=1;
        }
    }
    

    return 0;
}