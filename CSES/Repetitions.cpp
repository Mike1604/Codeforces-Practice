//#include <bits/stdc++.h >
#include <iostream>
#include <string>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ENDL '\n'
using namespace std;
typedef long long lli;

int main()
{
    string in;
    char last='P';
    lli a=0, max=1;

    cin>>in;

    for(int i=0; i<in.size(); i++){
        if(in[i] == 'A'){ 
            if(last=='A'){ a++; }
            else{a=1;}
            last='A';
        }
        if(in[i] == 'C'){ 
            if(last=='C'){ a++;}
            else{a=1;}
            last='C';
        }
        if(in[i] == 'G'){ 
            if(last=='G'){ a++; }
            else{a=1;}
            last='G';
        }
        if(in[i] == 'T'){ 
            if(last=='T'){ a++; last='T';}
            else{a=1;}
            last='T';
        }
        if(a>max){max=a;}
    }

    cout << max << ENDL;
    return 0;
}