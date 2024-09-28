
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="this apple is sweet";
    string s2="this apple is sour";
    vector<string>ans;
    map<string,int> mp;
    string word1;
    stringstream ss(s1);
    string word2;
    stringstream ss1(s2);
    while(ss>>word1){
        mp[word1]++;
    }
    while(ss1>>word2){
        mp[word2]++;
    }
    for(auto x:mp){
        if(x.second==1){
            ans.push_back(x.first);
        }
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
}
