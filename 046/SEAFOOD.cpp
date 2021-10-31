#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll countDish(int n, ll t[], ll time){
    ll dish = 0;
    for (int i=0;i<n;i++){
        dish += (time/t[i]);
    }
    return dish;
}
int main(){
    freopen("SEAFOOD.INP", "r", stdin);
    freopen("SEAFOOD.OUT", "r", stout);
    ll S; cin >> S;
    int n; cin >> n;
    ll t[n+1];
    ll low = 1, high = 1, mid;
    for (int i=0;i<n;i++){
        cin >> t[i];
        high = max(high, t[i]);
    }
    high *= S;
    while (low < high){
        mid = (low+high)/2;
        int dish = countDish(n, t, mid);
        if (dish < S) low = mid+1;
        else high = mid;
    }
    cout << high;
    return 0;
}
