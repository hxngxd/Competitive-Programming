#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
vector<bool> prime(1e6+1, true);
void lock(){
    cin >> n;
    prime[0] = false; prime[1] = false;
    for (int i=2;i<=sqrt(n);i++){
        if (prime[i]){
            for (int j=i+i;j<=n;j+=i){
                prime[j] = false;
            }
        }
    }
    ll k1 = 0, k2 = 0;
    for (int i=1;i<=sqrt(n);i++){
        if (n%i==0){
            if (i*i==n && prime[i]){
                k1++;
                k2+=i;
            }
            else{
                if (prime[i]){
                    k1++;
                    k2+=i;
                }
                if (prime[n/i]){
                    k1++;
                    k2+=(n/i);
                }
            }
        }
    }
    cout << k1 << " " << k2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("LOCK.INP", "r", stdin);
    freopen("LOCK.OUT", "w", stdout);
    lock();
    return 0;
}
