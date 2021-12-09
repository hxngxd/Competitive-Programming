#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    int k1 = 0, k2 = 0, last;
    for (int i=2;i<=n;i++){
        while (n%i==0){
            n/=i;
            if (i!=last){
                k1++;
                k2+=i;
                last = i;
            }
        }
    }
    cout << k1 << " " << k2;
}
int main(){
    freopen("LOCK.INP", "r", stdin);
    freopen("LOCK.OUT", "w", stdout);
    int n; cin >> n;
    solve(n);
    return 0;
}
