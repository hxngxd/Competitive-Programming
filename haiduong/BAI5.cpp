#include <bits/stdc++.h>
using namespace std;
float giaithua(int n){
    float gt = 1;
    for (int i=1;i<=n;i++){
        gt *= i;
    }
    return gt;
}
int main(){
    int n = 1;
    float nghichdaogt = 1 / giaithua(n);
    float en = 1;
    while (nghichdaogt >= 2*pow(10,-6)){
        en += nghichdaogt;
        cout << nghichdaogt << " ";
        n++;
        nghichdaogt = 1 / giaithua(n);
    }
    cout << en;
    return 0;
}
