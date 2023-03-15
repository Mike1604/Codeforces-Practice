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
    lli n, max=0; cin >> n;
    vector<lli> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    for(int i=0; i<nums.size(); i++){
        lli cont=0, j=i, k=i+1, aux = nums[i];
        while((j>=0) && (aux>=nums[j])){
            aux = nums[j];
            cont++;
            j--;
        }
        aux = nums[i];
        while((k<nums.size()) && (aux>=nums[k])){
            if(k<nums.size()){
                aux = nums[k];
            }
            cont++;
            k++;
        }
        //cont++;
        if(cont> max){
            max=cont;
        }
    }

    cout<<max<<ENDL;

    return 0;

}