#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="abab";
    vector<int> lps(str.size(),0);
    int prefix=0;
    int sufix=1;
    while(sufix<str.size()){
        if(str[prefix]==str[sufix]){
            lps[sufix]=prefix+1;
            prefix++;
            sufix++;
        }
        else{
            if(prefix==0){
                lps[sufix]==0;
                sufix++;
            }
            else{
                prefix=lps[prefix-1];
            }
        }
    }
    cout<<lps[lps.size()-1];
}