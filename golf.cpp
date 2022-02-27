#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long T;
    cin >> T;
    while (T--)
    {
        long long N, x, k;
        cin >> N >> x >> k;
        bool f = true;
        long long r = N + 1;
            if(x%k==0)
            {
            f=true;
            }
            else
         {
            if ((r-x)%k==0)
            {
                f = true;
            }
            else
                f = false;
           }
        if (f == true)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
