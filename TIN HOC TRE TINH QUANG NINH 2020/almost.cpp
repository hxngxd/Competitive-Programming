#include <bits/stdc++.h>
using namespace std;
string solve(int n){
    if (n<6) return "NO";
    vector<int> a{6,8,66,68,86,88,666,668,686,688,866,868,886,888};
    for (int i=0;i<a.size();i++){
        if (n%a[i]==0) return "YES";
    }
    return "NO";
}
int main(){
    int n; cin >> n;
    cout << solve(n);
    return 0;
}
