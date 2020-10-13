// 4.    Inversion Count

#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

int merge(ull arr[],ull temp[],ull low,ull mid,ull high)
{
    ull i=low,j=mid,k=low,count=0;
    while((i<=mid-1) && (j<=high)){
        if(arr[i]<=arr[j])
            temp[k++]=arr[i++];
        else {
            temp[k++]=arr[j++];
            count+=(mid-i);
        }
    }
    while(i<=mid-1)
        temp[k++]=arr[i++];
    while(j<=high)
        temp[k++]=arr[j++];
    for(ull i=low;i<=high;i++)
        arr[i]=temp[i];
    return count;
}

int mergesort(ull arr[],ull temp[],ull low,ull high)
{
    ull mid,count=0;
    if(low<high)
    {
        mid=(low+high)/2;
        count+=mergesort(arr,temp,low,mid);
        count+=mergesort(arr,temp,mid+1,high);
        count+=merge(arr,temp,low,mid+1,high);
    }
    return count;
}

int main()
{
    //code
    int t;
    cin>>t;
    while(t--)
    {
        ull n;
        cin>>n;
        ull arr[n];
        for(ull i = 0; i < n; i++)
            cin>>arr[i];
        ull temp[n];
        ull ans = mergesort(arr,temp,0,n-1);
        cout<<ans<<endl;
    }
    return 0;
}