#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int m, n, q;
    map<int,int> mp;
    m = rand() % 11, n = rand() % 11, q = rand() % 10 + 5;
    cout << m << " " << n << " " << q << nl;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            int k = rand() % 105 + 5;
            while (mp.find(k)!=mp.end()){
                k = rand() % 100 + 5;
            }
            mp[k]++;
            cout << k << " ";
        }
        cout << nl;
    }
    while (q--){
        cout << rand() % m << " " << rand() % m << " " << rand() % 100 + 5 << nl;
    }
    return 0;
}