    //https://codeforces.com/problemset/problem/230/A
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
        lli st, n; cin>>st>>n;
        vector<pair<lli,lli>> dragons; 
        lli a,b;
        for(int i=0; i<n; i++){
            cin>>a>>b;
            dragons.push_back({a,b});
        }
        sort(dragons.begin(), dragons.end());   
        for(auto e:dragons){
            if(e.first<st){
                st+=e.second;
            }
            else{cout<<"NO"<<ENDL; return 0;}
        }
        cout<<"YES"<<ENDL;
        return 0;
    }