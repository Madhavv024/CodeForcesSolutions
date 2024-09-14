#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    //write your code here
    int tc;cin>>tc;
    while (tc--)
    {
        int s1 , s2 , s3 , s4;
        cin>>s1>>s2>>s3>>s4;
        if(s1>s2)
        {
            if(s3>s4){
                if(s1>s4 && s3>s2){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else{
                if(s1>s3 && s4>s2){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
        else{
            if(s3>s4){
                if(s2>s4 && s3>s1){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else{
                if(s2>s3 && s4>s1){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
    }
    

    return 0;
}