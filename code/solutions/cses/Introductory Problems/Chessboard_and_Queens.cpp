#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

char board[8][8];
vector<bool> col(8, false), d1(15, false), d2(15, false);
/*
d1: / i + j
d2: \ 7 - i + j
*/
ll ans = 0;
void quaylui(int i)
{
    if (i == 8)
    {
        ans++;
        return;
    }
    for (int j = 0; j < 8; j++)
    {
        if (board[i][j] == '*')
            continue;
        if (!col[j] && !d1[i + j] && !d2[7 - i + j])
        {
            col[j] = d1[i + j] = d2[7 - i + j] = true;
            quaylui(i + 1);
            col[j] = d1[i + j] = d2[7 - i + j] = false;
        }
    }
}
int main()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            cin >> board[i][j];
    }
    quaylui(0);
    cout << ans;
    return 0;
}