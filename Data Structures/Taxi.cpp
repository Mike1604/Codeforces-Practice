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
 
int main(){
    lli n; cin >> n;
    vector<lli> nums (n,0);
    fore(i,0,n){cin>>nums[i];}
    sort(nums.rbegin(), nums.rend());
    lli ans=0;
    int i=0, j=n-1;
    while(i<=j){
        if(nums[i]+nums[j] == 4){
            nums[i]+=nums[j];
            i++; j--;
            ans++;
        }
        else if (nums[i]+nums[j] <= 4){
            nums[i]+=nums[j];
            j--;
            if(j<i){ans++;}
        }
        else{
            i++;
            ans++;
        }
    }
    cout<<ans<<ENDL;
    return 0;
}
