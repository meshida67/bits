#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
using db = double;
int main()
{
    ios_base::sync_with_stdio(NULL); 
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<vector<ll>> test(t, vector<ll>(2, 0));

    for (auto x : test) 
    {
        cin >> x[0] >> x[1];
        ll n = x[0];
        ll k = x[1];
        ll a = k/(n - 1);
        if (k % (n - 1) == 0) a--;
        ll b = k - a*(n - 1);
        cout << a*n + b  << '\n';
    }



/*
    a*n + b = f(k) = k + a
    k = a*(n - 1) + b
    i)
    a = k/(n-1)
    b = k - a*(n-1) = k - (k/n)*(n-1)
    f(k) = n*(k/(n-1)) +

    ii) b = n - 1
    k = (a+1)*(n-1)

    a = k/(n-1) -1
    f(k) = n*(k/(n-1) - 1) + n - 1 = n*(k/(n-1)) - 1

    n = 3, k = 7, f(k) = 10
    3*3 + 1 = 10 = 7 +3
    3 = 7/2

    n = 4, k = 12, f(k) = 15
    3*4 + 3 = 15 = 12 + 3
    3 = 12/4

    n = 2, k = 1000000000, f(k) = 1999999999
    999999999*2 + 1 = 1999999999 = 1000000000 + 999999999
    999999999 != 1000000000/2

*/
    return 0;
}
