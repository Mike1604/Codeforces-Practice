//#include <bits/stdc++.h >
#include <iostream>
#include <string>
#include <vector>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ENDL '\n'
using namespace std;
typedef long long lli;

int main()
{
    lli n;   cin>>n;
    vector<lli>nums(n);
    if((n==2) ||  (n==3)){cout<<"NO SOLUTION"<<ENDL;}
    else if(n==4){
        cout<<"2 4 1 3 "<<ENDL;
    }
    else{
        for(int i=0; i<n; i++){
            nums[i] = i+1;
        }
        for(int i=0; i<n; i+=2){
            cout<<nums[i]<<" ";
        }
        for(int i=1; i<n; i+=2){
            cout<<nums[i]<<" ";
        }
    }
    return 0;
}