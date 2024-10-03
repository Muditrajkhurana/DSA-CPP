#include<bits/stdc++.h>
using namespace std;
string clock(int j,string s){
        while(j>0){
            for(int i=0;i<s.size()-1;i++){
                swap(s[i],s[i+1]);
            }
            j--;
        }
        return s;
    }
    string anticlock(int j,string s){
        while(j>0){
            for(int i=s.size()-1;i>0;i--){
                swap(s[i],s[i-1]);
            }
            j--;
        }
        return s;
    }
    bool isRotated(string str1, string str2)
    {
        if(clock(2,str1)==str2){
            return true;
        }
        if(anticlock(2,str1)==str2){
            return true;
        }
        return false;
    }
int main(){
    string str1="amazon";
    string str2="azonam";
    cout<<isRotated(str1,str2);
}