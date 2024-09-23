#include<bits/stdc++.h>
using namespace std;
int  main(){
    string s;
    getline(cin,s);
    int n = s.size();
    string s1="";
    vector<string>ans;
    string s2;
    int count=0;
    for(int i=0;i<n;i++){
        char c=tolower(s[i]);
        if(c==' '){
            s2=s1;
            reverse(s2.begin(),s2.end());
            if(s1==s2){
                count++;
            }
            ans.push_back(s1);
            s1="";
        }
        else{
            s1+=c;
        }
    }
    ans.push_back(s1);
    s2=s1;
    reverse(s2.begin(),s2.end());
    if(s1==s2){
        count++;
    }
    cout<<count<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}
