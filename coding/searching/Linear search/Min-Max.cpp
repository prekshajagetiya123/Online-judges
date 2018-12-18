//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/min-max-8/


#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n,*arr,maxSum = 0,minSum = 0;
 cin>>n;
 arr = new int[n];
 
 for(int i = 0;i<n;i++)
 {
     cin>>arr[i];
 }
 sort(arr, arr+n);
 for(int i = 0;i<n-1;i++)
 {
     minSum+=arr[i];
 }
 for(int i= 1;i<n;i++)
 {
     maxSum+=arr[i];
 }
 cout<<minSum<<" "<<maxSum;
 return 0;
}