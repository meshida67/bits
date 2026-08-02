#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
using db = double;
int main()
{
    ios_base::sync_with_stdio(NULL); 
    cin.tie(NULL);

    int n, q;
    cin >> n;
    vector<int> prices(n);
    for (auto &i : prices) cin >> i;
    cin >> q;
    vector<int> coins(q);
    for (auto &i : coins) cin >> i;

    sort(prices.begin(), prices.end());


    for (auto &x : coins)
    {
        int l = 0;
        int r = n -1;
        while(l <= r)
        {
            int mid = l + (r - l)/2;
            if (prices[mid] <= x) l = mid + 1;
            else r = mid - 1;
        }
        cout << r + 1 << '\n';
    }
    return 0;
}

