#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("SDIV.INP", "r", stdin);
    freopen("SDIV.OUT", "w", stdout);
    ll a, b;
    cin >> a >> b;
    ll sum = 0;
    if (a==b || b%a==0 || a==1){
        cout << 0;
        return 0;
    }
    for (ll i=1;i<=sqrt(a);i++){
        if (a%i==0){
            if (i*i==a){
                if (b%i!=0) sum+=i;
            }
            else{
                if (b%i!=0) sum+=i;
                if (b%(a/i)!=0) sum+=(a/i);
            }
        }
    }
    cout << sum;
    return 0;
}
