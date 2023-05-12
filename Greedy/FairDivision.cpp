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
    lli t; cin>>t;
    while(t--){
        lli n; cin>>n;
        vector<int> nums(n);
        lli num1=0, num2=0, sum=0;;
        fore(i,0,n){
            int aux;
            cin>>aux;
            if(aux==1){num1++;}
            else{num2++;}
            nums[i]=aux;
            sum+=aux;
        }
        if(sum%2 !=0){
            nop;
        }else{
            sum=sum/2;
            if(sum % 2 == 0 || (sum % 2 == 1 && num1 != 0) ){
                yes;
            }
            else{
                nop;
            }
        }
    }
    return 0;
}
