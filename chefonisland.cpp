#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x, y, xr, yr, D;
        cin >> x >> y >> xr >> yr >> D;
        int a, b;
        a = x / xr;
        b = y / yr;
        int c = min(a, b);
        if (c<D)
        cout<<"No\n";
        else
        cout<<"Yes\n";
    }
    return 0;
}
