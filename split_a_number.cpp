#include<bits/stdc++.h>
using namespace std; 
using ll = unsigned long long;
using db = double;

// 1181C

ll split(ll n, ll size, ll position)
{
    ll a = n % (ll)pow(10, position -1 );
    ll b = n/(ll)pow(10, position - 1);

    if (a == 0 || (ll)log10(a) + (ll)log10(b) + 2 < size) return 0;
    return a + b;
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    ll L;
    ll n;
    cin >> L >> n;
    vector<ll> sums(L - 1);

    ll min = 0;

    for (ll i = 1; i < L; i++) sums[i] = split(n, L, i + 1);
    sort(sums.begin(), sums.end());

    while (sums[min] == 0) min++;
  //  cout << sums[min] << '\n';
    for (auto i : sums) cout << i << '\n';

    return 0;
}

