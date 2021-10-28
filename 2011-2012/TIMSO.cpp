#include <bits/stdc++.h>
using namespace std;
int main(){
    int A;
    cin >> A;
    int tong = 0, j=1;
    while (true){
        tong+=pow(j,2);
        if (tong>=A){
            break;
        }
        j++;
    }
    cout << j;
    return 0;
}
