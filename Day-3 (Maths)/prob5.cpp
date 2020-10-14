// 5.   No. of Paths

#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define mod 1000000007
int main()
{
    //code
    ull t;
    cin>>t;
    while(t--)
    {
        ull m,n;
        cin>>m>>n;
        ull dp[m+1][n+1];
        for(ull i = 1;i<m+1;i++)
        {
            for(ull j = 1;j<n+1;j++)
            {
                if(i == 1 || j == 1)
                    dp[i][j] = 1;
                else
                    dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
            }
        }
        cout<<dp[m][n]<<endl;
    }
    return 0;
}