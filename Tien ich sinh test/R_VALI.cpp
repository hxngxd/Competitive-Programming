#include <fstream>
#include <stdlib.h>
#include <time.h>

#define fi "VALI.INP"

const int MAXN=100;
///const int MAXN=10;
const int MAXW=1000;
const int MAXw=100;
const int MAXv=100;

using namespace std;

int random(int n) {
    return rand()%n;
}

int main()
{
    srand(time(NULL));

    fstream f;
    f.open(fi,ios::out);
    int i,n,W,w,v;
    n= 2 + random(MAXN - 2);
    W=random(MAXW);
    f << n << "   " << W << endl;
    for (i=1;i<=n;i++)
    {
        w = random(MAXw);
        v = random(MAXv);
        f << w<<"  "<<v<<endl;
    }
    f.close();
}


