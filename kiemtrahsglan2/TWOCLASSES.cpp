#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("TWOCLASSES.INP", "r", stdin);
    freopen("TWOCLASSES.OUT", "w", stdout);
    int n, m;
    long long tong = 0;
    cin >> n >> m;
    int k;
    map<int, int> A, B;
    for (int i=0;i<n;i++){
        cin >> k;
        A[k]++;
    }
    for (int i=0;i<m;i++){
        cin >> k;
        B[k]++;
    }
    if (n<=m){
        for (auto i : A) tong += i.second * B[i.first];
    }
    else{
        for (auto i : B) tong += i.second * A[i.first];
    }
    cout << tong;
    return 0;
}
