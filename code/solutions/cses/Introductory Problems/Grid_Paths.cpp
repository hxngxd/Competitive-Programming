#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

string s;
vector<vector<bool>> visited(9, vector<bool>(9, false));
char dir[4] = {'L', 'R', 'U', 'D'};
ll ans = 0;

void init()
{
    cin >> s;
    for (int i = 0; i < 9; i++)
        visited[0][i] = visited[8][i] = visited[i][0] = visited[i][8] = true;
    visited[1][1] = true;
}

bool hit_the_wall(int i, int j, char d)
{
    if (((d == 'L' && visited[i][j - 1]) || (d == 'R' && visited[i][j + 1])) && !visited[i - 1][j] && !visited[i + 1][j])
        return true;
    if (((d == 'U' && visited[i - 1][j]) || (d == 'D' && visited[i + 1][j])) && !visited[i][j - 1] && !visited[i][j + 1])
        return true;
    return false;
}

bool corner_check(int i, int j, char d)
{
    bool cL = (d == 'L'), cR = (d == 'R'),
         cU = (d == 'U'), cD = (d == 'D');
    bool L = visited[i][j - 1], R = visited[i][j + 1],
         U = visited[i - 1][j], D = visited[i + 1][j];
    bool RU = visited[i - 1][j + 1], LU = visited[i - 1][j - 1],
         LD = visited[i + 1][j - 1], RD = visited[i + 1][j + 1];

    if (RU && !R && !U)
    {
        if (cU || cR)
            return true;
    }
    if (RD && !R && !D)
    {
        if (cD || cR)
            return true;
    }
    if (LU && !L && !U)
    {
        if (cU || cL)
            return true;
    }
    if (LD && !L && !D)
    {
        if (cD || cR)
            return true;
    }
    return false;
}

void back_track(int i, int j, int step);

void go_next(int i, int j, int &step, char d)
{
    switch (d)
    {
    case 'L':
        j--;
        break;
    case 'R':
        j++;
        break;
    case 'U':
        i--;
        break;
    case 'D':
        i++;
        break;
    }

    if (!visited[i][j] && !hit_the_wall(i, j, d) && !corner_check(i, j, d))
    {
        visited[i][j] = true;
        back_track(i, j, step + 1);
        visited[i][j] = false;
    }
}

void back_track(int i, int j, int step)
{
    if (i == 7 && j == 1)
    {
        if (step == 48)
            ans++;
        return;
    }

    if (s[step] == '?')
    {
        for (auto d : dir)
            go_next(i, j, step, d);
    }
    else
        go_next(i, j, step, s[step]);
}

int main()
{
    init();
    back_track(1, 1, 0);
    cout << ans;
    return 0;
}