#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="edcab";
    vector<int>count(26,0);
    for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;
    }
    string ans="";
    for(int i=0;i<26;i++){
        char c='a'+i;
        while(count[i]){
            ans+=c;
            count[i]--;
        }
    }
    cout<<ans<<endl;
}