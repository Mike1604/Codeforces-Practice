/*
https://codeforces.com/problemset/problem/660/A
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

lli gcd(lli a,lli b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    lli n; cin >> n;
    vector<lli>nums (n);
    vector<lli>ans;
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int aux=0;
    for(int i=0; i<n-1; i++){
        ans.push_back(nums[i]);
        if((gcd(nums[i], nums[i+1])) != 1){
            aux++;
            ans.push_back(1);
        }
    }
    ans.push_back(*(nums.end()-1));
    cout<<aux<<ENDL;
    for(auto e:ans){
        cout<<e<<" ";
    }
    cout<<ENDL;
    return 0;
}