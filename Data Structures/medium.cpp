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

int main() {
    lli n; cin >> n;
    vector<lli> ans;
    for(int i=0; i<n; i++){
        vector<lli> nums(3,0);
        cin>>nums[0] >> nums[1] >> nums[2];
        sort(nums.begin(), nums.end());
        ans.push_back(nums[1]);
    }
    for(auto e:ans){
        cout << e << ENDL;
    }
    return 0;
}