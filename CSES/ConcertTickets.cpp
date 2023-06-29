/*
https://cses.fi/problemset/task/1091
                VOLUME: ▁▂▃▄▅▆▇ 100%
                SONG: 4th Dimension♫
                CREATOR: KIDS SEE GHOSTS™®
                0:35 ━❍──────── -3:56
                ↻     ⊲  Ⅱ  ⊳     ↺
                   
*/
//g++ -std=c++17 a.cpp && a < in.txt > out.txt
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    
    multiset<int> tickets;
    for (int i = 0; i < n; ++i) {
        int price;
        cin >> price;
        tickets.insert(price);
    }
    
    for (int i = 0; i < m; ++i) {
        int maxPrice;
        cin >> maxPrice;
        if(tickets.size() == 0){
            cout << -1 << '\n';
            continue;
        }
        auto it = tickets.lower_bound(maxPrice);
        if (it != tickets.begin()) {
            if(*it != maxPrice){
                --it;
            }
            cout << *it << '\n';
            tickets.erase(it);
        } else {
            if(*it <= maxPrice){
                cout << *it << '\n';
                tickets.erase(it);
            }else{cout << -1 << '\n';}
            
        }
    }
    
    return 0;
}
