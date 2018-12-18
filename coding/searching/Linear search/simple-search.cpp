//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/simple-search-4/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n,k,*arr;
     cin>>n;
     
     arr = new int[n];
     for(int i = 0;i<n;i++)
     {
         cin>>arr[i];
     }
     cin>>k;
  for(int t=0;t<n;t++)
  {
     if (arr[t]==k)
    { cout<<t;}
    // cout<<"3";
  }
     return 0;
 }