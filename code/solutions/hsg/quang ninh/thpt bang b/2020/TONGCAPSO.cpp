#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int ctoi(char c){
    return (int)c - 48;
}
bool isEven(string A, string B){
    return (ctoi(A.back()) + ctoi(B.back()))%2==0;
}
string bigNum(string A, string B){
    if (A.size() < B.size()) swap(A, B);

    string ans = "";
    int r = 0, d = A.size() - B.size();

    for (int i=A.size()-1;i>=0;i--){
        int cur = (i-d >= 0 ? ctoi(B[i-d]) : 0) + ctoi(A[i]) + r;
        r = 0;

        if (cur > 9){
            r = 1;
            cur %= 10;
        }
        ans += to_string(cur);
    }

    if (r==1) ans += "1";

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    fast_io
    int n; cin >> n;
    for (int i=0;i<n;i++){
        string A, B; cin >> A >> B;
        if (!isEven(A,B)) continue;
        cout << bigNum(A, B) << nl;
    }
    return 0;
}