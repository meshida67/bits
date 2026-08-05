#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
using db = double;

// 1352C

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


*/
    return 0;
}
