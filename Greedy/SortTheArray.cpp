/*

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
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(s) int(s.size())
#define all(s) s.begin(), s.end()
#define yes cout<<"YES"<<ENDL;
#define nop cout<<"NO"<<ENDL;
using namespace std;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef pair<int, int> pi;
typedef vector<lli> vi;

int main(){fast
    lli n; cin>>n;
    vi nums(n,0);
    vi numsord(n,0);
    fore(i,0,n){cin>>nums[i]; numsord[i]=nums[i];}
    sort(all(numsord));
    vi desorderd;
    bool ordered = true;
    fore(i,0,n){
        if(nums[i] != numsord[i]){ordered=false; desorderd.push_back(i);}
    }
    if(ordered){
        cout<<"yes"<<ENDL;;
        cout<<"1 1"<<ENDL;
    }
    else{
        lli l,r;
        l=desorderd[0];
        r=desorderd[desorderd.size()-1];
        reverse(nums.begin() + l, nums.begin() + r + 1);
        ordered = true;
        fore(i,0,n){
            if(nums[i] != numsord[i]){ordered=false;}
        }
        if(ordered){cout<<"yes"<<ENDL; cout<<l+1<<" "<<r+1<<ENDL;}
        else{cout<<"no"<<ENDL;}
    }
    
    


    return 0;
}
