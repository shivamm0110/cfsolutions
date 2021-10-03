// #include <bits/stdc++.h>
// // #include <stdio.h>
// #define ll long long
// const ll mod = 1000 * 1000 * 1000 + 7;

// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, k;
//         long long sum = 0, temp;

//         cin >> n >> k;

//         for (int i = 2; i <= (n / 2) * 2; i += 2)
//         {
//             temp = 0;
//             for (int j = 0; j < i; j++)
//             {
//                 // temp += (n - j - 1);
//             }
//             // cout<<i<<" "<<temp<<" "<<n<<endl;
//             sum += temp % mod;
//         }

//         sum += 2;

//         cout << sum % mod << endl;
//     }

//     return 0;
// }