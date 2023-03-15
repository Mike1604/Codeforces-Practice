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
    string num;
    map<char, lli> coins;
    coins.insert(pair<char, lli>('A',0));
    coins.insert(pair<char, lli>('B',0));
    coins.insert(pair<char, lli>('C',0));

    for(int i=0; i<3; i++){
        cin >> num;
        if(num[1]=='>'){
            coins[num[0]]++;
        }
        else{
            coins[num[2]]++;
        }
    }

    if(coins['A'] == 1 && coins['B'] == 1 && coins['C'] == 1){cout<<"Impossible"<<ENDL;}
    else{
        if(coins['A']==0){cout<<"A";}
        else if(coins['B']==0){cout<<"B";}
        else if(coins['C']==0){cout<<"C";}

        if(coins['A']==1){cout<<"A";}
        else if(coins['B']==1){cout<<"B";}
        else if(coins['C']==1){cout<<"C";}

        if(coins['A']==2){cout<<"A";}
        else if(coins['B']==2){cout<<"B";}
        else if(coins['C']==2){cout<<"C";}
    }
    cout<<ENDL;
    return 0;
}