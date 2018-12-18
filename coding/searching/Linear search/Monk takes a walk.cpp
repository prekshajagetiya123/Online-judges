//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/monk-takes-a-walk/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c;
    cin>>t;
    string str;
    int n = t;
    while(t>=0){
     getline(cin,str);
     c = 0;
     for(int i=0;i<str.length();i++)
     {
         if(str[i]=='A'||str[i]=='I'||str[i]=='E'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
             c++;
        else
            continue;
         
     }  
     t--;
     if (t != n-1)
        cout << c << "\n";
    }
    return 0;    
}