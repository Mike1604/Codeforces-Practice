#include <iostream>
#include <vector>
#include <algorithm>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ENDL '\n'
using namespace std;
typedef long long lli;
 
int
main ()
{
    lli n, a, sum=0; cin >> n;
    vector<lli> nums(n);  

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    for(int i=0; i<n-1; i++){
        lli aux=0;
        if(nums[i+1] < nums[i]){
            aux = nums[i] - nums[i+1];
            sum+=aux;
            nums[i+1]+=aux;  
        }
    }

    cout << sum << ENDL;
    return 0;
}