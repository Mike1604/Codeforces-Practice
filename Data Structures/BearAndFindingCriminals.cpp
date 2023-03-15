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
    lli n, m, res=0; cin >> n >> m;
    vector<lli> nums (n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    int k=m-1, j=m-1;
    fore(i, 0, nums.size()){
        if( (k>=0) && (j<nums.size()) ){
            if((k==j) && nums[k] ==1){
                res+=1;
            }
            else if( nums[k] == 1 && nums[j] == 1){
                res+=2;
            }
        }
        else if((k<0) && (j<nums.size())){
            if(nums[j] == 1){
                res+=1;
            }
        }
        else if((k>=0) && (j>=nums.size())){
            if(nums[k] == 1){ res+=1;}
        }
   
        k--;
        j++;
    }

    cout << res << ENDL;
    return 0;

}