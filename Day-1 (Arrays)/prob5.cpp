// 5.	Kadane’s Algorithm 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        long int sum=0,maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>maxi)
                maxi=sum;
            if(sum<0)
                sum=0;
        }
        cout<<maxi<<endl;
        
    }
    return 0;
}