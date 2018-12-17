// https://www.hackerearth.com/problem/algorithm/monk-and-suffix-sort/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    string s;
    int l, i, k;
    cin>>s>>k;
    l = s.length();


    vector<string>v;
    string count_suffix = "";
    for(i = l-1;i>0;i++){

       count_suffix = s[i]+count_suffix;
        v.push_back(count_suffix);

    }
    sort(v.begin(), v.end());
    return 0;
}