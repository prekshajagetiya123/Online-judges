//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/square-transaction-20/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t,*arr,*a;
    cin>>t;
    arr=new int[t];
        for(int i=1;i<=t;i++)
        {
            cin>>arr[i];
        }
    int q;
    cin>>q;
    while(q!=0)
    {
    int a;
    int sum=0;
    cin>>a;
        for(int i=1;i<=t;i++)
        {
            sum=sum+ar[i];
                if(sum>=a)
                {
                        cout<<i<<"\n";break;
                }

        }
    if(sum<a)
    {
    cout<<"-1\n";
    }
    q--;

    }
    return 0;
}