#include <bits/stdc++.h>
#define long long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("COVID.INP", "r", stdin);
    freopen("COVID.OUT", "w", stdout);
    int n, room = 0;
    cin >> n;
    int a[n+1];
    int nguoi[4];
    memset(nguoi, 0, sizeof(nguoi));
    for (int i=0;i<n;i++){
        cin >> a[i];
        if (a[i]==4){
            room++;
        }
        else{
            nguoi[a[i]]++;
        }
    }
    for (int i=3;i>=1;i--){
        if (i==3){
            for (int j=1;j<=nguoi[3];j++){
                if (nguoi[1]>0){
                    nguoi[1]--;
                }
                room++;
            }
            nguoi[3]=0;
        }
        else if (i==2){
            room += nguoi[2]/2;
            nguoi[2] = nguoi[2]%2;
            if (nguoi[2]==1){
                room++;
                if (nguoi[1]==1){
                    nguoi[1]=0;
                }
                else if (nguoi[1]>1){
                    nguoi[1]-=2;
                }
                nguoi[2]=0;
            }
        }
        else if (i==1){
            int m = nguoi[1]%4;
            if (m==0){
                room += nguoi[1]/4;
            }
            else{
                int k = ((nguoi[1]-m)+4)/4;
                room += k;
            }
            nguoi[1]=0;
        }
    }
    cout << room;
    return 0;
}
