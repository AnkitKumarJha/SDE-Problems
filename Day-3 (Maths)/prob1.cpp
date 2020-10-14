// 1. Search in a 2D matrix

#include<bits/stdc++.h>
using namespace std;
#define M 3 
#define N 4 

int bSearch(int matrix[M][N], int target)
{
    int low=0;
    int high=(M*N)-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(matrix[mid/M][mid%N]==target)
            return 1;
        if(matrix[mid/M][mid%N]<target)
            low=mid+1;
        else
            high=mid-1;
    }
    return 0;
}

int main() 
{ 
    int matrix[M][N] = { { 1, 3, 5, 7 }, 
                         { 10, 11, 16, 20 }, 
                         { 23, 30, 34, 50 } }; 
    int K = 13; 
    if (bSearch(matrix,K)) 
        cout << "Found" << endl; 
    else
        cout << "Not found" << endl; 
    return 0;
}