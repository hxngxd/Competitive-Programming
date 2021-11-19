#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll quasong(int n, int a[]){
    if (n==1) return a[0];
    if (n==2) return max(a[0], a[1]);
    if (n==3) return a[0] + a[1] + a[2];
    ll cost = 0;
    for (int i=n-1;i>1;i-=2){
        if (i==2){
            cost += a[0] + a[1] + a[2];
        }
        else{
            cost += a[i] + a[0] + 2*a[1];
        }
    }
    if (n%2==0) cost += a[1];
    return cost;
}
int main(){
    freopen("QUASONG.INP", "r", stdin);
    freopen("QUASONG.OUT", "w", stdout);
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    cout << quasong(n, a);
    return 0;
}
