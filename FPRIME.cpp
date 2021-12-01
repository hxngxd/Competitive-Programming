#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("FPRIME.INP", "r", stdin);
    freopen("FPRIME.OUT", "w", stdout);
    int T; cin >> T;
    int a[T+1];
    int MAXX = -1;
    for (int i=0;i<T;i++){
        cin >> a[i];
        MAXX = max(MAXX, a[i]);
    }
    vector<bool> prime(MAXX+1, true);
    prime[0] = false;
    prime[1] = false;
    for (int i=2;i<=sqrt(MAXX);i++){
        if (prime[i]==true){
            for (int j=i+i;j<=MAXX;j+=i){
                prime[j] = false;
            }
        }
    }
    for (int i=0;i<T;i++){
        cout << (prime[a[i]] ? "YES\n" : "NO\n");
    }
    return 0;
}



