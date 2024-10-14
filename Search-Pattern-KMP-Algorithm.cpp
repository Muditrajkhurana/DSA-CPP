#include<bits/stdc++.h>
using namespace std;
int main(){
        string haystack="geeksforgeeks";
        string needle ="geek";
        vector<int> ans;
        int n = haystack.length();
        int m = needle.length();

        for(int i = 0;i<=n-m;i++)
        {
            int j;
            for(j=0;j<m;j++)
            {
                if(needle[j]!=haystack[i+j])
                {
                    break;
                }
            }
            if(j==m)
            {
               ans.push_back(i+1);
            }
        }
        for(int i = 0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
}