#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="lEetcOde";
    vector<char> vovel;
        for(int i=0;i<s.size();i++){
            if((s[i]=='A'||s[i]=='I'||s[i]=='E'||s[i]=='O'||s[i]=='U')||(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='o'||s[i]=='u')){
                vovel.push_back(s[i]);
                s[i]='#';
            }
        }
        sort(vovel.begin(),vovel.end());
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                s[i]=vovel[k];
                k++;
            }
        }
    cout<<s;
}