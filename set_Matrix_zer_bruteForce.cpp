/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
using ll = long long;
using lld = long double;
#define mod 10000000007
#define INF 1e18
#define pi 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define mp make_pair
int32_t main()
{
    int tc = 1;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int num;
                cin >> num;
                matrix[i][j]=num;
            }
        }

    cout<<"Matrix before change----"<<"\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {

                    for (int index = i + 1; index < n; index++)
                    {
                        if(i>0)matrix[i-1][j]=-1;
                        if(matrix[index][j]==0) continue;
                        matrix[index][j] = -1;
                    }
                    for(int index = j+1;index<m;index++)
                    {
                        if(j>0)matrix[i][j-1]=-1;
                        if(matrix[i][index]==0) continue;
                        matrix[i][index] = -1;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(matrix[i][j]==-1) matrix[i][j]=0;
            }
        }
    cout<<"Matrix after change----"<<"\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }

    }
    return 0;
}