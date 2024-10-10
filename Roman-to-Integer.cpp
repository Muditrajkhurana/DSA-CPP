#include<bits/stdc++.h>
using namespace std;
int num(char a){
        if(a=='I'){
            return 1;
        }
        else if(a=='V'){
            return 5;
        }
        else if(a=='X'){
            return 10;
        }
        else if(a=='L'){
            return 50;
        }
        else if(a=='C'){
            return 100;
        }
        else if(a=='D'){
            return 500;
        }
        else{
            return 1000;
        }
    }
int main(){
    string s="MCMXCIV";
    int sum=0;
    int i=0;
    while(i<s.size()-1){
        if(num(s[i])<num(s[i+1])){
            sum+=-num(s[i]);
        }
        else{
            sum+=num(s[i]);
        }
        i++;
    }
    sum+=num(s[s.size()-1]);
    cout<<sum;
}