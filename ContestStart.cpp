#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int k;
    cin >> k;
    while (k--)
    {
        int n, x, t;
        cin >> n >> x >> t;
        int q = t / x;
        int s = 0;
        s = s + ((n - 2) * q + (q - 1));
        cout << s << endl;
    }
    return 0;
}