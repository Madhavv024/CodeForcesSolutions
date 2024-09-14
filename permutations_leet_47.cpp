#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long long
using namespace std;


void solve_2(vector<int> nums, set<vector<int>> &ans , int ind){
    if(ind == nums.size())
    {
        ans.insert(nums);
        return;
    }
    for (int i = ind; i < nums.size(); i++)
    {
        swap(nums[i], nums[ind]);
        solve_2(nums,ans,ind+1);
        swap(nums[i],nums[ind]);
    }
    
}

int32_t main()
{
    //write your code here
    
    vector<int> nums = {1,1,2};
    vector<int> freq(nums.size()+1);
    vector<int> ds;
    for (int i = 1; i <=nums.size(); i++)
    {
        freq[i]=0;
    }
    set<vector<int>> ans;

    sort(nums.begin(),nums.end());
    solve_2(nums,ans,0);
    
    for(vector<int> i : ans){
        for(int j = 0;j<i.size();j++){
            cout<<i[j]<<" ";
        }
        cout<<endl;
    }
    vector<vector<int>> fin_ans;
    for(vector<int> i : ans){
        fin_ans.push_back(i);
    }
    // return fin_ans;
    return 0;
}