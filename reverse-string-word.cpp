#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string ans="";
    string str="";
    int count=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==' '){
            count++;
            reverse(ans.begin(),ans.end());
            str+=ans+" ";
            ans="";
        }
        else{
            ans+=s[i];
        }
    }
    if(count){
        reverse(ans.begin(),ans.end());
        str+=ans;
    }
    else{
        str+=ans;
    }
    cout<<str;
}