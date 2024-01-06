#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    int n; cin >> n;
    int cnt = 0, i = 1;
    while (true){
        int tmp = i;
        int d = floor(log10(tmp))+1;
        while (cnt+d>n){
            tmp/=10;
            d--;
        }
        if (cnt+d==n){
            cout << tmp%10; break;
        }
        cnt+=d;
        i++;
    }
    return 0;
}