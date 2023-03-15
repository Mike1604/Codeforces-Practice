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
        lli t; cin>>t;
        vector<lli> sol; 
        for(int i=0; i<t; i++){
            lli n, c, ans=0;
            cin>> n >> c;
     
            vector<lli>nums((n+1));
            nums[0]=0;
            for(int j=1; j<n+1; j++){
                cin >> nums[j];
                nums[j] +=j;
            }
            /*
            cout <<"Sin Ordenar: "<<ENDL;
            for(auto e:nums){
                cout << e << " ";
            }
            cout << ENDL;
            */
            sort(nums.begin()+1, nums.end());
            lli k=1;
           /*
            cout <<"Ordenados: "<<ENDL;
            for(auto e:nums){
                cout << e << " ";
            }*/
     
            while((nums[k]<=c) && (k < n+1)){ 
                ans++;
                c-=nums[k];
                k++;
            }
            sol.push_back(ans);
        }
     
        for(auto e:sol){
            cout << e << ENDL;
        }
     
        return 0;
    }