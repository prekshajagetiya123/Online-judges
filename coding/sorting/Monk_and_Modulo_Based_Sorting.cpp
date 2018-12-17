// https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/monk-and-modulo-based-sorting/

#include<bits/stdc++.h>
using namespace std;
int k;

//function for modulus based sorting
bool new_sort(int a, int b){

     if(a%k < b%k)
     {
        return true;

    }
    else
    {
        return false;
    }
}

//driver function
int main(){
    int n,i;
    vector<int>v(n);
cin>>n>>k;
    for (i=0;i<n;i++)
    {
        cin>>v[i];
    }


    stable_sort(v.begin(),v.end(), new_sort);
    for(i = 0; i<n ;i++){
        cout<<v[i]<<" ";
    }
            return 0;

}