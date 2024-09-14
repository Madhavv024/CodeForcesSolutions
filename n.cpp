#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int k, n;
		cin >> k >> n;
		int a[k];
		int dif = 1;
		a[0] = 1;
		for (int i = 1; i < k; i++)
        {
            if (a[i-1] + dif + (k - i - 1) <=n)
            {
                a[i] = a[i-1] + dif;
                dif++;
            }
            else{
                dif=1;
                a[i] = a[i-1] + dif;
            }

        }

		for (int x : a)
		{
			cout << x << " ";
		}
		cout<<endl;
	}
	return 0;
}