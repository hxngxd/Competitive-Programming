#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("NTRG.INP", "r", stdin);
    freopen("NTRG.OUT", "w", stdout);
    int n;
    cin >> n;
    int tong = 0;
    int previousDiv = 0;
    for (int i=2;i<=n;i++){
        while (n%i==0){
            n /= i;
            if (i!=previousDiv){
                tong+=i;
                previousDiv = i;
            }
        }
    }
    cout << tong;
    return 0;
}
