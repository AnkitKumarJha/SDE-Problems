// 6.     Merge Overlapping Subintervals

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
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end());
        vector<pair<int,int>> st;
        st.push_back(v[0]);
        int j=0;
        for(auto x:v)
        {
            if(x.first<=st[j].second)
                st[j].second=max(x.second,st[j].second);
            else{
                st.push_back(x);
                j++;
            }
        }
        for(auto x:st){
            cout<<x.first<<" "<<x.second<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}