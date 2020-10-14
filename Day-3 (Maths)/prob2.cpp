// 2. Pow(x,n)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    //code
    int t;
    cin>>t;
    while(t--)
    {
        ll num,pw;
        cin>>num>>pw;
        ll ans=1;   
        while(pw)
        {
            if(pw%2)
            {
                ans=(ans*num)%mod;
                pw--;
            }
            else
            {
                num=(num*num)%mod;
                pw/=2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}