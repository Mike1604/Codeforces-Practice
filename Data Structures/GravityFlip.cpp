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
    lli a; cin >> a;
    vector<lli> nums (a);
    for (int i = 0; i < a; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    
    for(auto e:nums){
        cout<<e<<" ";
    }
    cout<<ENDL;
    return 0;
}