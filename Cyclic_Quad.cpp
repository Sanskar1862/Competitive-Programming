#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        int q = A + C;
        int r = B + D;
        if (q == 180 &&r == 180)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}