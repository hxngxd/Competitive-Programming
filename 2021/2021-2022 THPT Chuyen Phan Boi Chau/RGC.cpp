#include <bits/stdc++.h>
#define long long long
using namespace std;
bool cp(long n){
    long m = sqrt(n);
    return m*m==n;
}
void rgc(long n){
    bool nt=true;
    for (int i=1;i<=ceil(sqrt(n));i++){
        if (n%i==0 && i!=1){
            if (cp(i)==true){
                cout << sqrt(i) << " " << n/i << endl;
                nt = false;
                break;
            }
            else if (cp(n/i)==true){
                cout << sqrt(n/i) << " " << i << endl;
                nt = false;
                break;
            }
        }
    }
    if (nt==true){
        if (cp(n)){
            cout << sqrt(n) << " 1" << endl;
        }
        else{
            cout << "1 " << n << endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("RGC.INP", "r", stdin);
    freopen("RGC.OUT", "w", stdout);
    int n;
    cin >> n;
    long a[n+1];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        rgc(a[i]);
    }
    return 0;
}
