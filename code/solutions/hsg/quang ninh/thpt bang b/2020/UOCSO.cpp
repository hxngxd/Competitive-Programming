#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef map<int, int> mpii;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

map<ll, int> numOfDivisors;

mpii fact(ll n){
    mpii ans;
    while (n%2==0){
        ans[2]++;
        n/=2;
    }
    for (int i=3;i<=sqrt(n);i+=2){
        while (n%i==0){
            n/=i;
            ans[i]++;
        }
    }
    if (n>1) ans[n]++;
    return ans;
}

int solve(){
    ll a, b, prod; cin >> a >> b;
    prod = a * b;

    if (numOfDivisors.find(prod) != numOfDivisors.end()){
        return numOfDivisors[prod];
    }

    if (prod==1) return 1;

    mpii fab, fa = fact(a), fb = fact(b);
    for (auto i : fa) fab[i.first] += i.second;
    for (auto i : fb) fab[i.first] += i.second;

    int ans = 1;
    for (auto i : fab) ans *= (i.second + 1);

    numOfDivisors[prod] = ans;
    return ans;
}

int main()
{
    fast_io
    int q; cin >> q;
    while (q--){
        cout << solve() << nl;
    }
    return 0;
}