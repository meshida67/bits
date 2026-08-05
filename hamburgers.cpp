#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
using db = double;

// 371C

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll burgar = 0;
    string recipe;
    ll Nb, Ns, Nc, Pb, Ps, Pc, rubles;
    cin >> recipe >> Nb >> Ns >> Nc >> Pb >> Ps >> Pc >> rubles;
    vector<ll> ingredients(3, 0);
    vector<ll> required(3);


    for (auto i : recipe)
    {
        if (i == 'B') ingredients[0]++;
        else if (i == 'S') ingredients[1]++;
        else ingredients[2]++;
    }



    ll l = 0;
    ll r = 1e13;

    while (l < r)
    {
        ll mid = l + (r - l)/2;
        transform(ingredients.begin(), ingredients.end(), required.begin(),
                [mid](ll a){return mid*a;});
        vector<ll> deficit(3);
        deficit[0] = required[0] - Nb;
        deficit[1] = required[1] - Ns;
        deficit[2] = required[2] - Nc;

        ll cost = 0;
        if (deficit[0] > 0) cost += deficit[0]*Pb;
        if (deficit[1] > 0) cost += deficit[1]*Ps;
        if (deficit[2] > 0) cost += deficit[2]*Pc;

        if (cost > rubles) r = mid;
        else 
        {
            l = mid + 1;
            burgar = mid;
        }
    }

    cout << burgar << '\n';

    return 0;
}


