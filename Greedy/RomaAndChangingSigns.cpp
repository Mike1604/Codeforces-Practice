/*
https://codeforces.com/contest/262/problem/B
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: 4th Dimension♫
                CREATOR: KIDS SEE GHOSTS™®
                0:35 ━❍──────── -3:56
                ↻     ⊲  Ⅱ  ⊳     ↺
                   
*/
//g++ -std=c++17 a.cpp && a < in.txt > out.txt
#include<bits/stdc++.h>
#define fore(i,a,b) for(int i=(a), FINALD=(b); i<FINALD; ++i)
#define ENDL '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(s) int(s.size())
#define all(s) s.begin(), s.end()
#define yes cout<<"YES"<<ENDL;
#define nop cout<<"NO"<<ENDL;
using namespace std;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef pair<int, int> pi;
typedef vector<lli> vi;


int main(){_
    lli n,k; cin>>n>>k;
    vector<lli> nums(n,0);
    fore(i,0,n){cin>>nums[i];}
    lli i=0;
    while((i<n) && (k>0)){
        if(nums[i] == 0){break;}
        else if(nums[i] < 0){
            nums[i] = nums[i]*(-1);
            if((i+1) != n){i++;}
            k--;
        }
        else{
            if((i-1) >= 0){
                if(nums[i-1] > nums[i]){
                    while(k>0){
                        nums[i] = nums[i]*(-1);
                        k--;
                    }
                }
                else{
                    i--;
                    while(k>0){
                        nums[i] = nums[i]*(-1);
                        k--;
                    }
                }
            }else{
                while(k>0){
                        nums[i] = nums[i]*(-1);
                        k--;
                    }
            }
        }
    }
    lli sum = accumulate(nums.begin(), nums.end(), 0);
    cout<<sum<<ENDL;
    return 0;
}
