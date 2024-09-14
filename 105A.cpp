/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, count = 0;
        cin >> n;
        while (n != 50)
        {
            if (n > 50)
            {
                n = n - 3;
                count++;
            }
            else if(n<50)
            {
                n+=2;
                count++;
            }
            else{
                break;
            }
        }
        cout<<count;
    }
    return 0;
}