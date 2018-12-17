// https://www.hackerearth.com/practice/algorithms/sorting/insertion-sort/practice-problems/algorithm/monk-and-nice-strings-3/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, j, n;
    cin>>n;
    vector<string>v(n);
    int count  = 0;

    for(i = 0; i<n; i++){
        cin>>v[i];
        
        for( j = 0; j < i; j++)
        {
            if(v[i]>v[j]){
                count++;
            }
        }
        cout<<count<<" ";
        
    }
    return 0;
    
}