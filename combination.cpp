#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long long
using namespace std;

vector<vector<int>> ans;

void comb(vector<int> &cand, int ind, vector<int> &a, vector<vector<int>> &ans, int sum)
{
    if (ind >= cand.size())
    {
        if (sum == 0)
        {
            ans.push_back(a);
        }
        return;
    }
    // cout << "now the index is--" << ind << " and sum is-- " << sum;
    if (sum - cand[ind] >= 0)
    {
        a.push_back(cand[ind]);
        comb(cand, ind, a, ans, sum - cand[ind]);
        a.pop_back();
    }
    comb(cand, ind + 1, a, ans, sum);
}

int32_t main()
{
    // write your code here
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    vector<int> outputs;
    comb(candidates, 0, outputs, ans, target);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }
    ans.clear();
    return 0;
}