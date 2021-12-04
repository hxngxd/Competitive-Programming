#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.INP", "r", stdin);
    // freopen("output.OUT", "w", stdout);
    int n; cin >> n;
    vector<char> a(n+1);
    vector<int> prefix(n);
    int cur = 0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (a[i]=='<'){
            prefix[i]=cur+1;
            cur = prefix[i];
        }
        else prefix[i]=cur;
    }
    if (prefix[n-1]==0 || prefix[n-1]==n){
        cout << 0;
        return 0;
    }

    vector<int> suffix(n);
    cur = 0;
    for (int i=n-1;i>=0;i--){
        if (a[i]=='>'){
            suffix[i]=cur+1;
            cur = suffix[i];
        }
        else suffix[i] = cur;
    }
    for (auto i : prefix){
        cout << i << " ";
    }
    cout << endl;
    for (auto i : suffix){
        cout << i << " ";
    }
    return 0;
}