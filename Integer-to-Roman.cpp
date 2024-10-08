#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=3999;
    vector<string> one={"I","II","III","IV","V","VI","VII","VIII","IX"};
    vector<string> ten={"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    vector<string> hun={"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    vector<string> th={"M","MM","MMM"};
    string ans="";
    if((num/1000)){
        ans+=th[(num/1000)-1];
        num=num%1000;
    }
    if(num/100){
        ans+=hun[(num/100)-1];
        num=num%100;
    }
    if(num/10){
        ans+=ten[(num/10)-1];
        num=num%10;
    }
    if(num){
        ans+=one[num-1];
    }
    cout<<ans;
}