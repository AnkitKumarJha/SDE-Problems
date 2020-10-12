// 4.	Merge two sorted Arrays without extra space 
// Gap method

#include<bits/stdc++.h>
using namespace std;

int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}

void merge(int arr1[], int arr2[], int n, int m) {
    // code here
    int i,j,gap=n+m;
    while (gap = nextGap(gap)) {
        for(i=0;i+gap<n;i++)
            if(arr1[i]>arr1[i+gap])
                swap(arr1[i],arr1[i+gap]);
        for(j=gap>n?gap-n:0;i<n&&j<m;i++,j++)
            if(arr2[j]<arr1[i])
                swap(arr2[j],arr1[i]);
        if(j<m)
            for(j=0;j+gap<m;j++)
                if(arr2[j]>arr2[j+gap])
                    swap(arr2[j],arr2[j+gap]);
    }
        
}

int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    merge(arr1,arr2,n,m);
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    for(int i=0;i<m;i++)
        cout<<arr2[i]<<" ";
    cout<<endl;
    return 0;
}