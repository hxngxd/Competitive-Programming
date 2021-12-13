#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main(){
    ll n, m; n = 1000, m = 100;
    ll a[3]={1,1,2};
    if (n<=2){
        cout << a[n-1];
        return 0;
    }
    ll curr_step = 2;
    ll temp=a[2];
    for (int i=0;i<3;i++) cout << a[i] << endl;
    while (curr_step < n){
        a[2] = a[2]+a[1]+a[0];
        a[0] = a[1];
        a[1] = temp;
        temp = a[2];
        cout << a[2] << " " << a[2]%m << endl;
        curr_step++;
    }
    cout << a[2];
    return 0;
}
