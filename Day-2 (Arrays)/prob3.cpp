// 3. Next Permutation

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,l;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(k=n-2;k>=0;k--) {
            if(v[k]<v[k+1])
                break;
        }
        if(k<0) {
            reverse(v.begin(),v.end());
        }
        else {
            for(l=n-1;l>k;l--)
                if(v[l]>v[k])
                    break;
        }
        swap(v[k],v[l]);
        reverse(v.begin()+k+1,v.end());
        
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}