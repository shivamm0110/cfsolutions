#include <bits/stdc++.h>
using namespace std;
#define min(X, Y) (((X) < (Y)) ? (X) : (Y))
#define max(X, Y) (((X) > (Y)) ? (X) : (Y))

void solve()
{
    int n;
    cin >> n;

    int min = sqrt(n);
    int extra = n - min * min;

    if (extra == 0)
    {
        cout << min << " "
             << "1" << endl;
    }
    else if (extra > min + 1)
    {
        cout << min + 1 << " " << min + 1 - (extra - min - 1) << endl;
    }
    else if (extra < min + 1)
    {
        cout << extra << " " << min + 1 << endl;
    }
    else if (extra == min + 1)
    {
        cout << min + 1 << " " << min + 1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}