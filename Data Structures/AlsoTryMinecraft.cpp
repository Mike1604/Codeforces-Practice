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
    lli n, m; cin >> n >> m;
    vector<lli> nums (n,0);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    vector<lli> suffixes (n,0);
    vector<lli> prefixes (n,0);
    lli sum = 0;
    for(int i=1; i<n; i++){
        if(nums[i-1] > nums[i]){
            sum += nums[i-1] - nums[i];
        }
        prefixes[i]=sum;
    }
    sum=0;
    for(int i=n-2; i>=0; i--){
        if(nums[i+1] > nums[i]){
            sum += nums[i+1] - nums[i];
        }
        suffixes[i]=sum;
    }
    lli l, r, ans;
    for(int j=0; j<m; j++){
        cin >> l >> r;
        l--;
        r--;
        if(l<r){
            ans=prefixes[r]-prefixes[l];
            cout<<ans<<ENDL;
        }
        else{
            ans=suffixes[r]-suffixes[l];
            cout<<ans<<ENDL;
        }
    }


    return 0;
}