#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// #define int long long
using namespace std;
int32_t main()
{
    //write your code here
    FAST_IO;
    vector<int> list;
    list.push_back(1);
    list.push_back(2);
    for(int i = 3;i<=1e6;i++){
        if(i%3!=0 and i%10!=3){
            list.push_back(i);
        }
    }
    
    int tc;cin>>tc; 
    while (tc--)
    {
        int k;cin>>k;
        cout<<list[k-1]<<endl;
    }
    

    return 0;
}