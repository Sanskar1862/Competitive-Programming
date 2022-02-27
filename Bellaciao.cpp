#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int D, d, p, q;
        cin >> D >> d >> p >> q;
        int s = 0;
        int d1 = D / d;
        int d2 = D % d;
        s = (d * (d1) * (2 * p + (d1 - 1) * q))/2;
        if (D % d != 0)
        {
            s = s + d2 * (p + (d1)*q);
        }
        cout << s << endl;
    }
    return 0;
}