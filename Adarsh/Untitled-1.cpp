#include <bits/stdc++.h>
using namespace std;

bool valid( vector<vector<char>> &mat,int x, int y)
{
    if (x >= 0 && y >= 0 && x < mat.size() && y < mat[0].size() && mat[x][y] == '.')
    {
        return true;
    }
    return false;
}

void walk(int x, int y, vector<vector<char>> &mat)
{
    if (valid(mat,x, y))
    {
        mat[x][y] = '#';
        walk(x + 1, y, mat);
        walk(x, y + 1, mat);
        walk(x - 1, y, mat);
        walk(x, y - 1, mat);
    }
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> mat(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char x;
            cin>>x;
            mat[i].emplace_back(x);
        }
    }
    for(int i=0;i<n;i++)
    {
        if (mat[i][m - 1] == '.')
        {
            walk(i, m - 1, mat);
        }
        if (mat[i][0] == '.')
        {
            walk(i, 0, mat);
        }
    }
    for(int i=0;i<m;i++)
    {
        if (mat[n - 1][i] == '.')
        {
            walk(n - 1, i, mat);
        }
        if (mat[0][i] == '.')
        {
            walk(0, i, mat);
        }
    }
    int sol = 0;
    for(int i=1;i<n - 1;i++)
    {
        for(int j=1;j< m - 1;j++)
        {
            if (mat[i][j] == '.')
            {
                sol++;
                walk(i, j, mat);
            }
        }
    }
    cout<<sol<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    solve();
        
    }
    return 0;
}