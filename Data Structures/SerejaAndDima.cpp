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
    int n, ser=0, dima=0; cin >> n;
    vector<int> nums(n,0);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    int j=0, k=n-1, i=0;
    while(j<=k){
        if(nums[j]>nums[k]){
            if(i%2==0){ser+=nums[j]; }
            else{dima+=nums[j];}
            j++;
        }
        else{
            if(i%2==0){ser+=nums[k];}
            else{dima+=nums[k];}
            k--;
        }
        i++;
    }
    cout<<ser<<" "<<dima<<ENDL;
    return 0;
}