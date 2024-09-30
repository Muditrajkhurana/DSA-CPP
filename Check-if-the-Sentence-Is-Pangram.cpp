#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="thequickbrownfoxjumpsoverthelazydog";
    vector<int>ans(26,0);
    for(int i=0;i<s.size();i++){
        ans[s[i]-'a']++;
    }
    int i;
    for(i=0;i<26;i++){
        if(ans[i]==0){
            cout<<false;
            break;
        }

    }
    if(i==26){
        cout<<true;
    }
}

