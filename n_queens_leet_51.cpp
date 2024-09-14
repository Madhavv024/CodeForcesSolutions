#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long long
using namespace std;

vector<vector<string>> res;

bool check(int i, int j, vector<string> &a, int n)
{
    for (int k = i; k >= 0; k--)
    {
        if (a[k][j] == 'Q')
            return false;
    }
    int k = i, l = j;
    while (i >= 0 && j >= 0)
    {
        if (a[i][j] == 'Q')
            return false;
        i--;
        j--;
    }

    while (k >= 0 && l < n)
    {
        if (a[k][l] == 'Q')
            return false;
        k--;
        l++;
    }
    return true;
}

void solve(int i, vector<string> &mat)
{
    if (i == mat.size())
    {
        res.push_back(mat);
        return;
    }
    for (int j = 0; j < mat.size(); j++)
    {
        if (!check(i, j, mat, mat.size()))
            continue;
        mat[i][j] = 'Q';
        solve(i + 1, mat);
        mat[i][j] = '.';
    }
}

int32_t main()
{
    // write your code here
    res.clear();
    int n = 4;
    vector<string> mat(n,string(n,'.'));
    solve(0,mat);
    
    
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

    return 0;
}