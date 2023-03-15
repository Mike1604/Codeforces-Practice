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
    lli n, sum=0, dls=0, a; cin >> n;
    vector<lli> nums;
    nums.push_back(0);
    for(int i=0; i<n; i++){
        cin >> a;
        nums.push_back(a);
    }

    for(int i=0; i<n; i++){
       int x = nums[i];
       int y = nums[i+1];
       cout<<"a "<<sum<<ENDL;
       sum+=x-y;
       cout<<"sum "<<sum<<ENDL;
       if(sum<0){
            dls+= -sum;
            sum=0;
       }
    }
    cout<<dls<<ENDL;
    return 0;
}