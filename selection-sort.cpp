#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> num={10,8,2,3,1,4};
    for(int i=0;i<num.size();i++){
        int min=i;
        for(int j=i;j<num.size();j++){
            if(num[j]<num[min]) min=j;
        }
        swap(num[i],num[min]);
    }
    for(int j=0;j<num.size();j++){
        cout<<num[j]<<" ";
    }
}