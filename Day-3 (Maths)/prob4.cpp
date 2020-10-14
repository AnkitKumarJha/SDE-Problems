// 4. Majority Element (>N/3 times)


#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int c1=0,c2=0;
    int num1=-1,num2=-1;
    int n=nums.size();
    vector<int> v;
    for(int x:nums)
    {
        if(num1==x)
            c1++;
        else if(num2==x)
            c2++;
        else if(c1==0){
            num1=x;
            c1=1;
        }
        else if(c2==0){
            num2=x;
            c2=1;
        }            
        else {
            c1--;
            c2--;
        }
    }
    if(count(nums.begin(),nums.end(),num1)>n/3)
        v.push_back(num1);
    if((count(nums.begin(),nums.end(),num2)>n/3) && num1!=num2)
        v.push_back(num2);  
    
    return v;        
}

int main()
{
    //code
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v,v2;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        v2=majorityElement(v);
        for(auto x:v2)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}