#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    // write your code here
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            arr.push_back(i + 1);
        }

        if (n % 2 != 0)
        {
            for (int i = 1; i < n;)
            {

                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                i+=2;
            }
            int temp = arr[n-1];
            arr[n-1] = arr[n-2];
            arr[n-2] = temp;

        }
        else
        {
            for (int i = 1; i < n; i++)
            {

                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                i+=1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
    return 0;
}