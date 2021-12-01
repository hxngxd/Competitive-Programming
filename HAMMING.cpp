#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("HAMMING.INP", "r", stdin);
    freopen("HAMMING.OUT", "w", stdout);
    vector<int> memo, x2{2}, x3{3}, x5{5};
    memo.push_back(1);
    int k2=0,k3=0,k5=0;
    int next = min(x2[k2], min(x3[k3], x5[k5]));
    map<int, int> id;
    id[1] = 1;
    int index = 2;
    while (next <= 1e9){
        memo.push_back(next);
        id[next] = index;
        index++;
        x2.push_back(next*2);
        x3.push_back(next*3);
        x5.push_back(next*5);
        if (x2[k2]==next) k2++;
        if (x3[k3]==next) k3++;
        if (x5[k5]==next) k5++;
        next = min(x2[k2], min(x3[k3], x5[k5]));
    }
    int T; cin >> T;
    int n;
    for (int i=0;i<T;i++){
        cin >> n;
        cout << (id[n]==0 ? -1 : id[n]) << endl;
    }
    return 0;
}
