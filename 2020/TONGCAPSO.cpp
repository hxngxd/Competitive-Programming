#include <bits/stdc++.h>
#define ll long long
using namespace std;
int ctoi(char c){
    return (int)c - 48;
}
string largesum(string a, string b){
    string kq = "";
    if (a.size()<b.size()) swap(a, b);
    int j = a.size() - b.size(), r = 0, sm;
    for (int i=a.size()-1;i>=0;i--){
        if (i-j>=0){
            sm = ctoi(a[i]) + ctoi(b[i-j]) + r;
        }
        else{
            sm = ctoi(a[i] + r);
        }
        if (sm<=9){
            kq.insert(0, to_string(sm));
            r = 0;
        }
        else{
            kq.insert(0, to_string(sm%10));
            r=1;
        }
    }
    return kq;
}
int main(){
    freopen("TONGCAPSO.INP", "r", stdin);
    freopen("TONGCAPSO.OUT", "w", stdout);
    int n;
    cin >> n;
    string A[n+1], B[n+1];
    for (int i=0;i<n;i++){
        cin >> A[i] >> B[i];
    }
    string a, b;
    int isEven;
    for (int i=0;i<n;i++){
        a = A[i];
        b = B[i];
        isEven = ctoi(a[a.size()-1]) + ctoi(b[b.size()-1]);
        if (isEven%2==0){
            if (a.size()>10 || b.size()>10){
                cout << largesum(a, b) << endl;
            }
            else{
                cout << stoi(a) + stoi(b) << endl;
            }
        }
    }
    return 0;
}
