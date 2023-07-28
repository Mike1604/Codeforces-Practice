/*
https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
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

struct mystack
{
    vi s, smin{LLONG_MAX}, smax{LLONG_MIN};

    void push(long long x)
    {
        s.push_back(x);
        smin.push_back(std::min(smin.back(), x));
        smax.push_back(std::max(smax.back(), x));
    }

    lli pop(){
        lli res = s.back();
        s.pop_back();
        smin.pop_back();
        smax.pop_back();
        return res;
    }

    bool empty(){
        return s.empty();
    }

    lli min(){
        return smin.back();
    }
    lli max(){
        return smax.back();
    }
    void print(){
        cout<<"Nums: ";
        for(auto e:s){cout<<e<<" ";}cout<<ENDL;
        cout<<"Min:: ";
        for(auto e:smin){cout<<e<<" ";}cout<<ENDL;
        cout<<"Max: ";
        for(auto e:smax){cout<<e<<" ";}cout<<ENDL;
    }
};

mystack s1, s2;

void add(lli x){
    s2.push(x);
}

void remove(){
    if(s1.empty()){
        while(!s2.empty()){
            s1.push(s2.pop());
        }
    }
    s1.pop();
}
lli s;
bool good(){
    lli mn = min(s1.min(), s2.min());
    lli mx = max(s1.max(), s2.max());
    return mx - mn <= s;
}

int main(){_
    lli n; cin>>n>>s;
    vi nums(n,0);
    fore(i,0,n){cin>>nums[i];}
    lli ans=0, l=0;
    fore(r,0,n){
        add(nums[r]);
        while(!good()){
            remove();
            l++;
        }
        ans += r-l+1;
    }
    cout<<ans<<ENDL;
   
    return 0;
}
