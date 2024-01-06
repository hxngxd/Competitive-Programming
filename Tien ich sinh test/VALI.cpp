#include<bits/stdc++.h>
#include<fstream>

#define fi "vali.inp"
#define fo "vali.out"

using namespace std;
const int MAXN = 10000;
int n,i,j,W;
int w[MAXN];
float v[MAXN];
int L[MAXN][MAXN];
fstream f;

void Nhap(){
    f.open(fi,ios::in);
    f>>n;
    f>>W;
    for(i=1;i<=n;i++){
            f>>w[i];
            f>>v[i]; // value
    }
    f.close();
}

void Init(){

}

void QHD(){
    memset(L, 0, sizeof(L));
    for (i=1; i <= n; i++)
        for (j=1; j <= W; j++) {
            L[i][j] = L[i-1][j];
            if (w[i] <= j)
            if (L[i][j] < v[i] + L[i-1][j - w[i]])
                L[i][j] = v[i] + L[i-1][j - w[i]];


        }
}

void TruyVet(int i, int j) {
    if (i==0) return;
    if (j==0) return;

    if (w[i] > j) TruyVet(i-1, j);
        else { // w[i] <= j
            if (L[i][j] == L[i-1][j]) TruyVet(i-1, j);
                else {
                    TruyVet(i-1, j - w[i]);
                    f << i << "   ";
                }
        }
}
void InKQ(){
    f.open(fo,ios::out);
    f << L[n][W] << endl;
    TruyVet(n, W);
    f.close();


}

int main (){
    Nhap();
    QHD();
    InKQ();
    return 0;
}
