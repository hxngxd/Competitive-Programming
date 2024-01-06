#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    string s; cin >> s;
    for (int i=0;i<s.size();i++){
        if ('a' <= s[i] && s[i] <= 'z'){
            int j=i-1;
            string snum = "";
            while (j>=0 && '0' <= s[j] && s[j] <= '9'){
                snum += s[j--];
            }
            ll num = 0;
            if (snum=="") num=1;
            else{
                for (int j=snum.size()-1;j>=0;j--){
                    num = num*10 + (int)snum[j]-48;
                }
            }
            cout << string(num, s[i]);
        }
    }
    return 0;
}