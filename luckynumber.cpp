#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int c = 0;
    while (n != 0)
    {
        int r = n % 10;
        if (r == 4 || r == 7)
        {
            c++;
        }
        n /= 10;
    }
    if (c == 7 || c == 4)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
