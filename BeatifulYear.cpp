#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    bool flag = true;
    while (flag)
    {
        int i = y + 1;
        int k = i;
        int r = i % 10;
        i = i / 10;
        int r1 = i % 10;
        i /= 10;
        int r2 = i % 10;
        i /= 10;
        int r3 = i % 10;
        if (r != r1 && r != r2 && r != r3 && r2 != r3 && r1 != r3 && r1 != r2)
        {
            cout << k;
            flag = false;
        }
        else
        {
            y++;
        }
    }
    return 0;
}
