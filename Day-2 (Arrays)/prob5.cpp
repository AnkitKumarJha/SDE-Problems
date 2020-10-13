// 5.   Best Time to Buy and Sell Stock

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
        int buyDay=0;
        int sellDay=0;
        int profit=0;
        vector<pair<int,int>> v;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1]){
                sellDay=i;
                profit=max(profit,arr[sellDay]-arr[buyDay]);
            }
            else {
                if(profit>0)
                    v.push_back(make_pair(buyDay,sellDay));
                buyDay=i;
                sellDay=i;
                profit=0;
            }
        }
        if(profit>0)
            v.push_back(make_pair(buyDay,sellDay));
        if(!v.empty()){
            for(auto x:v){
                cout<<"("<<x.first<<" "<<x.second<<")"<<" ";
            }
        }
        else
            cout<<"No Profit";
        cout<<endl;
    }
    return 0;
}