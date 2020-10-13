// 1. Boolean Matrix Problem

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,x;
        cin>>r>>c;
        int arr1[r]={0};
        int arr2[c]={0};
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
            {
                cin>>x;
                if(x==1)
                {
                    arr1[i]=1;
                    arr2[j]=1;
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(arr1[i] || arr2[j])
                    cout<<1<<" ";
                else
                    cout<<0<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}