#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, _max = 0, rs = 0;
    int a[121];
    cin >> n;
    memset(a, 0, sizeof(a));
    for (int i=0;i<n;i++){
        cin >> m;
        a[m]++;
        if (a[m]>_max){
            _max = a[m];
            rs = m;
        }
    }
    cout << rs;
    return 0;
}
