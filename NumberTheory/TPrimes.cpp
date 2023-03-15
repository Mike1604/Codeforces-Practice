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

vector<lli> nums;
 
void makeCriba(){
    vector<bool> criba(1e6+9, true);
    criba[0]=criba[1]=false;
    for(int i=2; i*i<=1e6+7; i++){
        if(criba[i]){
            for(int j=i*i; j<=1e6+7; j+=i){criba[j]=false;}
        }
    } 
    for(lli i=2; i<1e6+7;i++){
        if(criba[i]){nums.push_back(i*i);}
    }
} 
 
int main(){
    makeCriba();
    lli n, aux; cin>>n;
    for(lli i(0); i<n; i++){
        cin>>aux;
        if(binary_search(nums.begin(), nums.end(), aux)){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }

    cout<<ENDL;
    return 0;
}