#include<bits/stdc++.h>
using namespace std;
int main(){
        string s="defRTSersUXI";
        int n=s.size();
        vector<char> lower;
        vector<char>upper;
        for(int i=0;i<n;i++){
            int a=s[i]-'a';
            if(a<0){
                upper.push_back(s[i]);
            }
            else{
                lower.push_back(s[i]);
            }
        }
        sort(lower.begin(),lower.end());
        sort(upper.begin(),upper.end());
        int j=0;
        int k=0;
        for(int i=0;i<n;i++){
            int a=s[i]-'a';
            if(a<0){
                s[i]=upper[j];
                j++;
            }
            else{
                s[i]=lower[k];
                k++;
            }
        }
        cout<<s;
}