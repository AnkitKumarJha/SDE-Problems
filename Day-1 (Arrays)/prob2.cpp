// 2.	Sort an array of 0’s 1’s 2’s without using extra space or sorting algo 
// Dutch National Flag Algorithm

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
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
            if(arr[mid]==0){
                swap(arr[low],arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid]==1)
                mid++;
            else if(arr[mid]==2){
                swap(arr[mid],arr[high]);
                high--;
            }
        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
    
}