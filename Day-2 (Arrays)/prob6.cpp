// 6.   Rotate Matrix
/* a. Find the Transpose of matrix
   b. Reverse the elements of each row */

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
	    int a[n][n];
	    // Input
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    // Transpose
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            swap(a[i][j],a[j][i]);
	        }
	    }
	    for(int i=n-1;i>=0;i--)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cout<<a[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}