#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int q = s.length();
        if(q==3)
        {
            cout<<"Error";
            return 0;
        }
        if (s[0] == '<' && s[1] == '/' && s[q - 1] == '>')
        {
            for (int i = 2; i < q - 1; i++)
            {
                int k;
                k = (int)s[i];
                // if (isupper(s[i]) || s[i] > 126 || s[i] < 33)
                if(!(isalnum(s[i]))||isupper(s[i]))
                {
                    cout << "Error" << endl;
                    return 0;
                }
            }
            cout << "Success" << endl;
        }
        else
            cout << "Error" << endl;
    }
    return 0;
}