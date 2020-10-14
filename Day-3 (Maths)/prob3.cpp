// 3. Majority Element (>N/2 times)

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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ct=0;
        int candt=0;
        for(int i=0;i<n;i++)
        {
            if(ct==0)
                candt=arr[i];
            if(candt==arr[i])
                ct++;
            else
                ct--;
        }
        if(count(arr,arr+n,candt)>n/2)
            cout<<candt<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}