#include <bits/stdc++.h>
#define ll long long
using namespace std;
int dem(int m, int n, int x){
    int cnt = 0;
    for (int i=1;i<=m;i++){
        cnt += min(x/i, n);
    }
    return cnt;
}
int findKthNumber(int m, int n, int k) {
    int l=1, r=m*n;
    while (l<r){
        int mid = l + (r-l)/2;
        if (dem(m, n, mid)<k){
            l = mid+1;
        }
        else r = mid;
    }
    return l;
}
int main(){
    int n, k;
    cin >> n >> k;
    cout << findKthNumber(n,n,k);
    return 0;
}
