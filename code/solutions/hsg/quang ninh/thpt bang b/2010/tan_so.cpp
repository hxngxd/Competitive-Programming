#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    string s; cin >> s;
    int a[121] = {0};
    int cnt=0, mx=0;
    char c;
    for (auto i : s){
        if ('a' <= i && i <= 'z') i -= 32;
        if (a[i]==0) cnt++;
        a[i]++;
    }
    cout << cnt;
    for (int i=0;i<121;i++){
        if (a[i]!=0){
            cout << (char)i << a[i];
            if (a[i] > mx){
                mx = a[i];
                c = (char)i;
            }
        }
    }
    cout << c;
    return 0;
}