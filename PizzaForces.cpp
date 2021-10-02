#include <bits/stdc++.h>
// #include <stdio.h>
#define ll long long
const ll mod = 1000 * 1000 * 1000 + 7;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        unsigned long long int n = 0, res = 0, temp = 0;
        cin >> n;

        if (n % 14 == 0 || n % 10 == 0 || n % 8 == 0 || n % 6 == 0)
        {
            cout << n * 2.5 << endl;
        }

        else
        {

            if (n > 14)
            {
                temp = n / 10;
                res += temp * 25;

                n -= temp * 10;

                if (n > 8)
                {
                    res += 25;
                }
                else if (n > 6)
                {
                    res += 20;
                }
                else
                {
                    res += 15;
                }

                // temp = n / 6;
                // temp++;

                cout << res << endl;
            }
            else if (n > 12)
            {
                temp = n / 8;
                res += temp * 20;

                n -= temp * 8;

                if (n > 0)

                {
                    res += 15;
                }

                cout << res << endl;
            }
            else
            {
                temp = n / 6;
                temp++;
                res += temp * 15;

                n -= temp * 6;

                cout << res << endl;
            }
        }
    }

    return 0;
}