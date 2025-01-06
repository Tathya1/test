#include<string.h>
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll xor_upto(ll n)
        {
            if (n % 4 == 0)
                return n;
            else if (n % 4 == 1)
                return 1;
            else if (n % 4 == 2)
                return n + 1;
            else
                return 0;
        }

int main()
{
    ll t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        ll zor = xor_upto(a-1);
        // cout << zor << " ";
        // cout << (zor^b) << " ";
        if (zor == b)
        {
            cout << a << endl;
        }
        else
        {
            if ((b^zor) == a)
                cout << a + 2 << endl;
            else
                cout << a + 1 << endl;
        }
    }
    return 0;
}