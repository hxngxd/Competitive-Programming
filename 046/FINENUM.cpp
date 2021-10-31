#include <bits/stdc++.h>
using namespace std;
bool snt(int n){
    if (n<2){
        return false;
    }
    else if (n<4){
        return true;
    }
    else{
        for (int i=2;i<=sqrt(n);i++){
            if (n%i==0){
                return false;
            }
        }
        return true;
    }
}
int bpchuso(int n){
    int tong = 0;
    while (n!=0){
        tong += pow(n%10, 2);
        n/=10;
    }
    return tong;
}
int main(){
    freopen("FINENUM.INP", "r", stdin);
    freopen("FINENUM.OUT", "w", stdout);
    int n;
    cin >> n;
    int finenumber = 0;
    vector<bool> a(500, 0);
    for (int i=11;i<=n;i++){
        int bp = bpchuso(i);
        if (a[bp]){
            finenumber++;
        }
        else{
            if (snt(bp)){
                finenumber++;
                a[bp]=1;
            }
        }
    }
    cout << finenumber << endl;
    return 0;
}
