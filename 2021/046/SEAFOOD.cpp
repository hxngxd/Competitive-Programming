#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
ull countDish(int n, ull t[], ull time){
    ull dish = 0;
    for (int i=0;i<n;i++){
        dish += (time/t[i]);
    }
    return dish;
}
int main(){
//    freopen("SEAFOOD.INP", "r", stdin);
//    freopen("SEAFOOD.OUT", "r", stout);
    ull S; cin >> S;
    int n; cin >> n;
    ull t[n+1];
    ull low = 1, high = 1, mid;
    for (int i=0;i<n;i++){
        cin >> t[i];
        high = max(high, t[i]);
    }
    high *= S;
    while (low < high){
        mid = (low+high)/2;
        ull dish = countDish(n, t, mid);
        if (dish < S) low = mid+1;
        else high = mid;
    }
    cout << high;
    return 0;
}
/*
1000000000000000 19
500 500 500 500 500 500 500 500 500 500 500 500 500 500 500 500 500 500 500
*/
