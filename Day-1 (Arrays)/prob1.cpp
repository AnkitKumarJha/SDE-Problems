//1.	Find the duplicate in an array of N+1 integers. 

#include<bits/stdc++.h>
using namespace std;

int duplicates(int a[], int n) {
    int slow=a[0],fast=a[0];
    do{
        slow=a[slow];
        fast=a[a[fast]];
    }while(slow!=fast);
    fast=a[0];
    while(slow!=fast){
        slow=a[slow];
        fast=a[fast];
    }
    return slow;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<duplicates(arr,n)<<endl;
    return 0;
}