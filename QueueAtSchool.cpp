#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        for (int k = 1; k <= t; k++)
        {
            if (s[i] == 'G')
            {
                if (s[i - 1] == 'B')
                {
                    char a;
                    a = s[i];
                    s[i] = s[i - 1];
                    s[i - 1] = a;
                }
                i++;
                break;
            }
        }
    }
    cout << s;
}
