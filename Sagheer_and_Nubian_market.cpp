#include<bits/stdc++.h>
using namespace std; 
using ll = unsigned long long;
using db = double;



int main()
{
    ios_base::sync_with_stdio(NULL); 
    cin.tie(NULL);

    int count = 0;
    ll total = 0;
    ll best_cost = 0;
    int best_k = 0;
    ll n, S;
    cin >> n >> S;
    vector<ll> costs(n);
    vector<ll> copies(n);
    for (int i = 0; i < n; i++) cin >> costs[i];

    int l = 0;
    int r = n + 1;
    while(l < r) 
    {
        total = 0;
        int mid = l + (r - l)/2;
        copy(costs.begin(), costs.end(), copies.begin());
        for (int i = 0; i < n; i++) copies[i] += (i + 1)*mid;
        sort(copies.begin(), copies.end());

        for (int i = 0; i < mid; i++) total += copies[i];

        if (total <= S)
        {
            l = mid + 1;
            best_k = mid;
            best_cost = total;
        }
        else r = mid;
    }

    cout << best_k << ' ' << best_cost << '\n';


    return 0;
}
