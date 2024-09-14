#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;

vector<vector<int>> ans;

void help(int i, vector<pair<int, int>> &can, int sum, vector<int> t, vector<vector<int>> &res)
{
    if (sum == 0)
    {
        res.push_back(t);
        return;
    }
    if (i >= can.size())
        return;
    int count = 0;

    while (sum - count * can[i].first >= 0 and count <= can[i].second)
    {
        help(i + 1, can, sum - count * can[i].first, t, res);
        t.push_back(can[i].first);
        count++;
    }
}

void comb(vector<int> &cand, int ind, vector<int> &ds, vector<vector<int>> &ans, int sum)
{
    if (sum == 0)
    {
        ans.push_back(ds);
    }
    if(sum<=0) 
        return;

    int prev = -1;
    for (int i = ind; i < cand.size(); i++)
    {
        if(cand[i]==prev) continue;       
        
        ds.push_back(cand[i]);
        comb(cand, i + 1, ds, ans, sum - cand[i]);
        ds.pop_back();
        prev = cand[i];
    }
}

int32_t main()
{
    // write your code here
    vector<int> candidates = {10,1,2,7,6,1,5};
    
    sort(candidates.begin(), candidates.end());
    int target = 8;
    vector<int> outputs;
    comb(candidates, 0, outputs, ans, target);

    // unordered_map<int,int> umap;
    // for(int i : candidates) umap[i]++;
    // vector<pair<int,int>> freq;
    // for(auto x : umap) freq.push_back(x);

    // help(0,freq,target,outputs,ans);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    ans.clear();
    return 0;
}