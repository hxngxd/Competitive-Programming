#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int maxn = 1e6;
vector<int> minPrime(maxn+1, 0);
void sieve(){
    for (int i=2;i*i<=maxn;i++){
        if (minPrime[i]==0){
            for (int j=i*i;j<=maxn;j+=i){
                if (minPrime[j]==0) minPrime[j]=i;
            }
        }
    }
    for (int i=2;i<=maxn;i++){
        if (minPrime[i]==0) minPrime[i]=i;
    }
}
int prime_power(ll num){
    int k=0, p=minPrime[num];
    while (num%p==0){
        num/=p;
        k++;
    }
    return (num==1 ? k : -1);
}
ll sum_of_divisor(ll num){
    ll q = minPrime[num];
    ll qn = num*num*q;
    return (qn-1)/(q-1);
}
ll power(ll a, ll b, ll m){
    a %= m;
    ll res = 1;
    while (b>0){
        if (b&1) res = (res * a)%m;
        b >>= 1;
        a = (a * a)%m;
    }
    return res;
}
bool test(ll a, ll n, ll k, ll m){
    ll mod = power(a, m, n);
    if (mod==1 || mod==n-1) return true;

    for (int l=1;l<k;l++){
        mod = (mod * mod) % n;
        if (mod==n-1) return true;
    }
    
    return false;
}
bool RabinMiller(ll n){
    if (n==2 || n==3 || n==5 || n==7) return true;
    if (n<11) return false;

    ll k=0, m=n-1;
    while (!(m&1)){
        m >>= 1;
        k++;
    }

    vector<int> checkSet = {2,3,5,7,61};
    for (auto a : checkSet){
        if (!test(a,n,k,m)) return false;
    }
    
    return true;
}
int solve(ll n){
    if (n<2) return 0;
    if (n<4) return 1;

    int ans = 1;
    for (ll i=2;i*i<=n;i++){
        if (prime_power(i)==-1) continue;
        if (RabinMiller(sum_of_divisor(i))){
            cout << i*i << ", ";
        }
    }

    return ans;
}
int main()
{
    fast_io
    sieve();
    ll n; cin >> n;
    cout << solve(n);
    return 0;
}