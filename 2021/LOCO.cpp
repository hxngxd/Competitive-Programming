#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main(){
    freopen("LOCO.INP", "r", stdin);
    freopen("LOCO.OUT", "w", stdout);
    ll n, m;
    cin >> n >> m;
    int a=1,b=1,c=2;
    int k=3;
    while (k<=n){
        int temp = (a+b+c)%m;
        a = b; b = c; c = temp;
        k++;
    }
    cout << c;
    return 0;
}
