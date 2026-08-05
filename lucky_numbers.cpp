#include<bits/stdc++.h>
using namespace std;
#define long long ll;

bool check (int n)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size = to_string(n).length();
    for(int i=0;i<size;i++)
    {
        int digit=0;
        digit=n%10;
        if(digit!=4 && digit!=7)
        {
            return false;
        }
        else
        {
            n/=10;
        }
    }
    return true;
}

int main()
{
    int a,b=0;
    int verifier=0;
    cin>>a>>b;
    for(int i=a;i<b+1;i++)
    {
        if(check(i))
        {
            cout<<i<<" ";
            verifier++;
        }
    }
    if(verifier==0)
    {
        cout<<-1;
    }
    return 0;
}
