//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        if (one == n)
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << "IDK\n";
            }
            cout << "YES\n";
        }
        else if (zero == n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << "NO\n";
            }
        }
        else
        {
            int temp = 0;
            bool flag = false;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    cout << "IDK\n";
                }
                else if (s[i] == '0')
                {
                    cout << "NO\n";
                    temp = i;
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                for (int i = temp; i < n - 1; i++)
                {
                    cout << "NO\n";
                }
            }
        }
    }

    return maru
}