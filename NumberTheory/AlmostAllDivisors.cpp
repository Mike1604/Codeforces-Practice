
/*
   https://codeforces.com/contest/1165/problem/D
*/
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
    lli t, n; cin >>t;
    vector<lli>ans;
    while(t--){
        cin >> n;
        lli pos;
        vector<lli>nums (n,0);
        vector<lli>div;
        fore(i,0,n){
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());
        pos=*nums.begin() * *(nums.end()-1);

        for (lli i = 1; i * i <= pos; i++){
            if (pos % i == 0){
                div.push_back(i);
                if (i * i != pos){
                    div.push_back(pos / i);
                }
            }
        }

        nums.push_back(1);
        nums.push_back(pos);
        
        sort(nums.begin(), nums.end());
        sort(div.begin(), div.end());

        if(nums==div){
            ans.push_back(pos);
        }
        else{
            ans.push_back(-1);
        }
    }
    for(auto e:ans){
        cout<<e<<ENDL;
    }
    return 0;
}