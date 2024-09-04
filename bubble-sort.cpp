#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> num={7,4,8,5,3};
    for(int i=num.size()-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(num[j]>num[j+1]){
                swap(num[j],num[j+1]);
            }
        }
    }
    for(int j=0;j<num.size();j++){
        cout<<num[j]<<" ";
    }
}