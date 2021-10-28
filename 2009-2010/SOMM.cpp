#include <bits/stdc++.h>
using namespace std;
int main(){
    int dgs[7]={0, 9, 189, 2889, 38889, 488889, 5888889};
    int num[7]={0, 9, 99, 999, 9999, 99999, 999999};
    int n, id;
    cin >> n;
    int t = n;
    for (int i=1;i<=6;i++){
        if (n<=dgs[i]){
            id = i;
            break;
        }
    }
    while ((n-dgs[id-1])%id!=0){
        n++;
    }
    int m = (n-dgs[id-1])/id + num[id-1];
    string s = to_string(m);
    cout << ((t==n) ? s[id-1] : s[id-(n-t)-1]) << endl;
    return 0;
}
