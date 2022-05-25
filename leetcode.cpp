#include <bits/stdc++.h>
#define int64 unsigned long long
using namespace std;
int main(){
    int t; cin >> t;
    int64 N[t+1], A1[t+1];
    string ans = "";
    for (int i=0;i<t;i++){
        cin >> N[i] >> A1[i];
        if (A1[i] % (int64)(1 + N[i] * pow(2, N[i]-1)) != 0){
            ans += "-1\n";
            continue;
        }
        ans += to_string(A1[i]) + " ";
        int64 x = (A1[i] / (int64)(1 + N[i] * (int64)pow(2, N[i]-1))) * (int64)pow(2, N[i]);
        for (int j=1;j<N[i];j++){
            int64 xj = (x / (int64)pow(2, N[i])) * (int64)(1 + N[i] * (int64)pow(2, N[i]-j-1));
            ans += to_string(xj) + " ";
        }
        ans += "\n";
    }
    cout << ans;
    return 0;
}

