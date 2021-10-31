#include <bits/stdc++.h>
using namespace std;
bool crinch(int n){
    long long sum = 1;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            if (i*i==n){
                sum+=i;
            }
            else{
                sum+=i;
                sum+=(n/i);
            }
        }
    }
    if (sum>n) return true;
    else return false;
}
int main(){
    int n;
    cin >> n;
    int num=0;
    for (int i=12;i<=n;i++){
        if (crinch(i)) num++;
    }
    cout << num;
    return 0;
}
1 1
2 3
3 4
4 6
5 6
6 12

