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
 
int main()
{
    lli a, posi, posj, ans=0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> a;
            if(a==1){
                posi=i+1;
                posj=j+1;
            }
        }
    }

    while (posi!=3)
    {
        if(posi<3){
            posi++;
            ans++;
        }
        else{
            posi--;
            ans++;
        }
    }
    while (posj!=3)
    {
        if(posj<3){
            posj++;
            ans++;
        }
        else{
            posj--;
            ans++;
        }
    }
    
    cout<<ans<<ENDL;
    
    return 0;
}