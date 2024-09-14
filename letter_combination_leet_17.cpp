#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long long
using namespace std;


    

void solve(string digit, string out, vector<string> &v, int ind, string map[])
{
    if(ind==digit.size()){
        v.push_back(out);
        return;
    }
    int num = digit[ind] - '0';
    string val = map[num];

    for (int i = 0; i < val.length(); i++)
    {
        out.push_back(val[i]);
        solve(digit,out,v,ind+1,map);
        out.pop_back();
    }
    
    
}

int32_t main()
{
    // write your code here
    
    
    vector<string> v;
    string map[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    solve("2", "", v, 0, map);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}