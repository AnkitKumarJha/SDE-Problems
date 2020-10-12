// 3.   Find Missing And Repeating

#include<bits\stdc++.h>
using namespace std;

vector<int> findTwoElement(int *arr, int n) {
    // code here
    vector<int> a(2);
        int i=0;
    while(i<n){
        if(arr[i]!=arr[arr[i]-1])
            swap(arr[i],arr[arr[i]-1]);
        else 
            i++;
    }
    for(i=0;i<n;i++)
    {
        if((i+1)!=arr[i]){
            a[0]=arr[i];
            a[1]=i+1;
            return a;
        }
    }
    return a;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> v= findTwoElement(arr,n);
    cout<<"The Repeating element is "<<v[0]<<endl<<"The Missing element is "<<v[1]<<endl;
    return 0;
}
