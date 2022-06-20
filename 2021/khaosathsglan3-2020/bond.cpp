#include <bits/stdc++.h>
#define ll long long
using namespace std;
int ctoi(char c){
    return c-48;
}
bool cp(int n){
    int k = sqrt(n);
    return k*k==n;
}
ll n;
void solve(){
    cin >> n;
    string s = to_string(n);
    int i=0;
    while (i<s.size()){
        bool goback = false;
        int num = ctoi(s[i]);
        if (cp(num) && num != 1){
            if (num!=0){
                s.erase(i,1);
                s.insert(i, to_string((int)sqrt(num)));
                i = 0;
            }
            else{
                i++;
            }
            continue;
        }
        for (int j=i+1;j<s.size();j++){
            num = num*10 + ctoi(s[j]);
            if (cp(num)){
                s.erase(i, j-i+1);
                s.insert(i, to_string((int)sqrt(num)));
                i = 0;
                goback = true;
                break;
            }

        }
        if (goback) continue;
        i++;
    }
    cout << s;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("bond.INP", "r", stdin);
    freopen("bond.OUT", "w", stdout);
    solve();
    return 0;
}
