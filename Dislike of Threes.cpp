#include <bits/stdc++.h>
using namespace std;
#define min(X, Y) (((X) < (Y)) ? (X) : (Y))
#define max(X, Y) (((X) > (Y)) ? (X) : (Y))

void solve()
{
    int n, count = 0, temp = 0, idk;
    cin >> n;
    while (count < n)
    {
        temp++;
        if (temp % 3 == 0 || temp % 10 == 3)
        {
            idk = 1;
        }
        else
        {
            count++;
        }
        // cout<<count<<" "<<n<<" "<<temp<<endl;
    }

    cout << temp << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}