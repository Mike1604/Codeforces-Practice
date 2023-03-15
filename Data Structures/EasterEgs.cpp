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
    lli n; cin>>n;
    string aux="ROYGVBI";
    if(n==7){cout<<aux<<ENDL; return 0;}
    vector<char> opc = {'R','O','Y','G','B','I','V'};
    for(int i=7; i<n; i++){
        int aux2 = aux.length()-1;
        for(int j=0; j<7; j++){
            if((aux[0]!=opc[j]) && (aux[1]!=opc[j]) && (aux[2]!=opc[j]) 
            && (aux[aux2]!=opc[j]) && (aux[aux2-1]!=opc[j]) && (aux[aux2-2]!=opc[j]) ){
                aux+=opc[j];
            }
        }
    }

    cout<<aux<<ENDL;
    return 0;
}