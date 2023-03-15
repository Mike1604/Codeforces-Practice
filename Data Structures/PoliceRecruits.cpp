/*https://codeforces.com/contest/427/problem/A*/
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
    lli n, num, crime=0, police=0, aux=0; cin >> n;
    fore(i,0,n){
        cin >> num;
        if(num<0){
            if(police!=0){
                police--;
            }
            else{crime++;}
        }
        else{
            police+=num;
        }
    }
    cout<<crime;
    return 0;
}